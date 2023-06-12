#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int v;
int dist[100][2]; // { from jiheon , from sungha }
vector<pair<int, int>> road[100];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int m, a, b, c;
	int js[2]; // jiheon , sungha
	cin >> v >> m;
	for (int i = 0; i < v; i++) {
		dist[i][0] = 1000000001;
		dist[i][1] = 1000000001;
	}
	while (m--) {
		cin >> a >> b >> c;
		road[a - 1].push_back(make_pair(b - 1, c));
		road[b - 1].push_back(make_pair(a - 1, c));
	}
	cin >> js[0] >> js[1];
	priority_queue<pair<int, int>> move;
	for (int i = 0; i < 2; i++) {
		dist[js[i] - 1][i] = 0;
		move.push(make_pair(0, js[i] - 1));
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
						move.push(make_pair(-1 * (d + td), tv));
					}
				}
			}
		}
	}
	int anssum = 1000000001;
	int answer = 101;
	queue<int> shortindex;
	for (int i = 0; i < v; i++) {
		int j = dist[i][0];
		int s = dist[i][1];
		if (i != js[0] - 1 && i != js[1] - 1 && j <= 1000000000 && s <= 1000000000) {
			if (j + s < anssum) {
				if (!shortindex.empty()) {
					while (!shortindex.empty()) {
						shortindex.pop();
					}
				}
				anssum = j + s;
				shortindex.push(i);
			}
			else if (j + s == anssum) {
				shortindex.push(i);
			}
		}
	}
	queue<int> jfast;
	while (!shortindex.empty()) {
		int ndx = shortindex.front();
		shortindex.pop();
		if (dist[ndx][0] <= dist[ndx][1]) {
			jfast.push(ndx);
		}
	}
	if (!jfast.empty()) {
		int jdist = 1000000001;
		while (!jfast.empty()) {
			if (dist[jfast.front()][0] < jdist) {
				answer = jfast.front() + 1;
				jdist = dist[jfast.front()][0];
			}
			jfast.pop();
		}
	}
	if (answer > 100) {
		cout << "-1";
	}
	else {
		cout << answer;
	}
}