#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n;
int visit[800][3];
vector<pair<int, int>> es[800];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int e, a, b, c, v1, v2;
	cin >> n >> e;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			visit[i][j] = 2000000001;
		}
	}
	while (e--) {
		cin >> a >> b >> c;
		es[a - 1].push_back(make_pair(b - 1, c));
		es[b - 1].push_back(make_pair(a - 1, c));
	}
	cin >> v1 >> v2;
	int sp[3] = { 0, v1 - 1,v2 - 1 }; //startpoint
	for (int j = 0; j < 3; j++) {
		visit[sp[j]][j] = 0;
		priority_queue<pair<int, int>> move; // distance , target
		// dijk
		move.push(make_pair(0, sp[j]));
		while (!move.empty()) {
			int d = -1 * move.top().first;
			int t = move.top().second;
			move.pop();
			if (d <= visit[t][j]) {
				for (int i = 0; i < es[t].size(); i++) {
					int nextv = es[t].at(i).first;
					int nextd = es[t].at(i).second;
					if (d + nextd < visit[nextv][j]) {
						visit[nextv][j] = d + nextd;
						move.push(make_pair(-1 * (d + nextd), nextv));
					}
				}
			}
		}
	}
	// 1 -> v1 -> v2 -> n
	bool c1 = false;
	// 1 -> v2 -> v1 -> n
	bool c2 = false;
	if (visit[v1 - 1][0] <= 2000000000 && visit[v2 - 1][1] <= 2000000000 && visit[n - 1][2] <= 2000000000) {
		c1 = true;
	}
	if (visit[v2 - 1][0] <= 2000000000 && visit[v1 - 1][2] <= 2000000000 && visit[n - 1][1] <= 2000000000) {
		c2 = true;
	}
	if (c1 && c2) {
		cout << min(visit[v1 - 1][0] + visit[v2 - 1][1] + visit[n - 1][2], visit[v2 - 1][0] + visit[v1 - 1][2] + visit[n - 1][1]);
	}
	else if (c1) {
		cout << visit[v1 - 1][0] + visit[v2 - 1][1] + visit[n - 1][2];
	}
	else if (c2) {
		cout << visit[v2 - 1][0] + visit[v1 - 1][2] + visit[n - 1][1];
	}
	else {
		cout << "-1";
	}
}