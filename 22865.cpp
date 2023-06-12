#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n;
int dist[100000][3];
vector<pair<int, int>> road[100000];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int m, d, e, l;
	cin >> n;
	int f[3]; // friend
	cin >> f[0] >> f[1] >> f[2];
	cin >> m;
	while (m--) {
		cin >> d >> e >> l;
		road[d - 1].push_back(make_pair(e - 1, l));
		road[e - 1].push_back(make_pair(d - 1, l));
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			dist[i][j] = 2000000001;
		}
	}
	priority_queue<pair<int, int>> move;
	for (int i = 0; i < 3; i++) {
		dist[f[i]-1][i] = 0;
		move.push(make_pair(0, f[i] - 1));
		while (!move.empty()) {
			int d = -1 * move.top().first;
			int v = move.top().second;
			move.pop();
			if (d <= dist[v][i]) {
				for (int j = 0; j < road[v].size(); j++) {
					int tv = road[v].at(j).first;
					int td = road[v].at(j).second;
					if (d + td < dist[tv][i]) {
						dist[tv][i] = d + td;
						move.push(make_pair(-1 * (td + d), tv));
					}
				}
			}
		}
	}
	int answeredge = 1;
	int answervalue = min(dist[0][0], min(dist[0][1], dist[0][2]));
	for (int i = 1; i < n; i++) {
		if (min(dist[i][0], min(dist[i][1], dist[i][2])) > answervalue) {
			answervalue = min(dist[i][0], min(dist[i][1], dist[i][2]));
			answeredge = i + 1;
		}
	}
	cout << answeredge;
}