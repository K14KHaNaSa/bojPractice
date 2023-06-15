#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<pair<int, int>> road[2000];
int dist[2000][3];// {from s , from g, from h}
priority_queue<int> ans;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int tc, n, m, t, s, g, h, a, b, d, x;
	cin >> tc;
	while (tc--) {
		cin >> n >> m >> t;
		// set empty
		for (int i = 0; i < n; i++) {
			while (road[i].size() > 0) {
				road[i].clear();
			}
			for (int j = 0; j < 3; j++) {
				dist[i][j] = 2000000001;
			}
		}
		cin >> s >> g >> h;
		int fromv[3] = { s - 1, g - 1, h - 1 };
		while (m--) {
			cin >> a >> b >> d;
			road[a - 1].push_back(make_pair(b - 1, d));
			road[b - 1].push_back(make_pair(a - 1, d));
		}
		priority_queue<pair<int, int>> move;
		for (int i = 0; i < 3; i++) {
			move.push(make_pair(0, fromv[i]));
			dist[fromv[i]][i] = 0;
			while (!move.empty()) {
				int nowd = -1 * move.top().first;
				int target = move.top().second;
				move.pop();
				if (dist[target][i] <= nowd) {
					for (int j = 0; j < road[target].size(); j++) {
						int nextv = road[target].at(j).first;
						int nextd = road[target].at(j).second;
						if (nowd + nextd < dist[nextv][i]) {
							dist[nextv][i] = nowd + nextd;
							move.push(make_pair(-1 * (nowd + nextd), nextv));
						}
					}
				}
			}
		}
		while (t--) {
			cin >> x;
			int da = dist[g - 1][0] + dist[h - 1][1] + dist[x - 1][2];
			int db = dist[h - 1][0] + dist[g - 1][2] + dist[x - 1][1];
			if (dist[x - 1][0] == min(da, db)) {
				ans.push(-1 * x);
			}
		}
		while (!ans.empty()) {
			cout << -1 * ans.top() << " ";
			ans.pop();
		}
		cout << "\n";
	}
}