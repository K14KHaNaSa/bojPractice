#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	char wl;
	cin >> n >> m;
	vector<vector<bool>> map(n, vector<bool>(m));
	for (int i = 0; i < n; i++) {
		wl = cin.get();
		for (int j = 0; j < m; j++) {
			wl = cin.get();
			if (wl == 'L') {
				map[i][j] = true;
			}
		}
	}
	int answer = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (map[i][j]) {
				int t = 0;
				queue<pair<int, int>> land;
				vector<vector<int>> visittime(n, vector<int>(m));
				vector<vector<bool>> visit(n, vector<bool>(m));
				land.push(make_pair(i, j));
				visit[i][j] = true;
				while (!land.empty()) {
					int u = land.front().first;
					int v = land.front().second;
					land.pop();
					t = max(t, visittime[u][v]);
					if (u > 0) {
						if (map[u - 1][v] == 1 && visit[u - 1][v] == false) {
							visittime[u - 1][v] = visittime[u][v] + 1;
							visit[u - 1][v] = true;
							land.push(make_pair(u - 1, v));
						}
					}
					if (u < n - 1) {
						if (map[u + 1][v] == 1 && visit[u + 1][v] == false) {
							visittime[u + 1][v] = visittime[u][v] + 1;
							visit[u + 1][v] = true;
							land.push(make_pair(u + 1, v));
						}
					}
					if (v > 0) {
						if (map[u][v - 1] == 1 && visit[u][v - 1] == false) {
							visittime[u][v - 1] = visittime[u][v] + 1;
							visit[u][v - 1] = true;
							land.push(make_pair(u, v - 1));
						}
					}
					if (v < m - 1) {
						if (map[u][v + 1] == 1 && visit[u][v + 1] == false) {
							visittime[u][v + 1] = visittime[u][v] + 1;
							visit[u][v + 1] = true;
							land.push(make_pair(u, v + 1));
						}
					}
				}
				answer = max(answer, t);
			}
		}
	}
	cout << answer;
}