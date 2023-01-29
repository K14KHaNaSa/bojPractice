#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, k;
	char status;
	cin >> n >> m >> k;
	vector<vector<int>> map(n, vector<int>(m));
	vector<vector<vector<int>>> move(n, vector<vector<int>>(m, vector<int>(k + 1, 1000001)));
	for (int i = 0; i < n; i++) {
		status = cin.get();
		for (int j = 0; j < m; j++) {
			status = cin.get();
			if (status == '0') {
				map[i][j] = 0;
			}
			else if (status == '1') {
				map[i][j] = 1;
			}
		}
	}
	queue<pair<int, int>> moving;
	move[0][0][0] = 1;
	moving.push(make_pair(0, 0));
	while (!moving.empty()) {
		int u = moving.front().first;
		int v = moving.front().second;
		moving.pop();
		if (u > 0) {
			bool pushit = false;
			if (map[u - 1][v] == 0) {
				for (int i = 0; i <= k; i++) {
					if (move[u - 1][v][i] > move[u][v][i] + 1) {
						move[u - 1][v][i] = move[u][v][i] + 1;
						pushit = true;
					}
				}
			}
			else if (map[u - 1][v] == 1) {
				for (int i = 0; i < k; i++) {
					if (move[u - 1][v][i + 1] > move[u][v][i] + 1) {
						move[u - 1][v][i + 1] = move[u][v][i] + 1;
						pushit = true;
					}
				}
			}
			if (pushit) {
				moving.push(make_pair(u - 1, v));
			}
		}
		if (u < n - 1) {
			bool pushit = false;
			if (map[u + 1][v] == 0) {
				for (int i = 0; i <= k; i++) {
					if (move[u + 1][v][i] > move[u][v][i] + 1) {
						move[u + 1][v][i] = move[u][v][i] + 1;
						pushit = true;
					}
				}
			}
			else if (map[u + 1][v] == 1) {
				for (int i = 0; i < k; i++) {
					if (move[u + 1][v][i + 1] > move[u][v][i] + 1) {
						move[u + 1][v][i + 1] = move[u][v][i] + 1;
						pushit = true;
					}
				}
			}
			if (pushit) {
				moving.push(make_pair(u + 1, v));
			}
		}
		if (v > 0) {
			bool pushit = false;
			if (map[u][v - 1] == 0) {
				for (int i = 0; i <= k; i++) {
					if (move[u][v - 1][i] > move[u][v][i] + 1) {
						move[u][v - 1][i] = move[u][v][i] + 1;
						pushit = true;
					}
				}
			}
			else if (map[u][v - 1] == 1) {
				for (int i = 0; i < k; i++) {
					if (move[u][v - 1][i + 1] > move[u][v][i] + 1) {
						move[u][v - 1][i + 1] = move[u][v][i] + 1;
						pushit = true;
					}
				}
			}
			if (pushit) {
				moving.push(make_pair(u, v - 1));
			}
		}
		if (v < m - 1) {
			bool pushit = false;
			if (map[u][v + 1] == 0) {
				for (int i = 0; i <= k; i++) {
					if (move[u][v + 1][i] > move[u][v][i] + 1) {
						move[u][v + 1][i] = move[u][v][i] + 1;
						pushit = true;
					}
				}
			}
			else if (map[u][v + 1] == 1) {
				for (int i = 0; i < k; i++) {
					if (move[u][v + 1][i + 1] > move[u][v][i] + 1) {
						move[u][v + 1][i + 1] = move[u][v][i] + 1;
						pushit = true;
					}
				}
			}
			if (pushit) {
				moving.push(make_pair(u, v + 1));
			}
		}
	}
	int answer = move[n - 1][m - 1][k];
	for (int i = 0; i < k; i++) {
		answer = min(answer, move[n - 1][m - 1][i]);
	}
	if (answer > 1000000) {
		cout << -1;
	}
	else {
		cout << answer;
	}
}