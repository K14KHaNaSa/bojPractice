#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	char status;
	cin >> n >> m;
	vector<vector<int>> map(n, vector<int>(m));
	vector<vector<int>> zero(n, vector<int>(m, 1000001));
	vector<vector<int>> one(n, vector<int>(m, 1000001));
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
	queue<pair<int, int>> move;
	move.push(make_pair(0, 0));
	zero[0][0] = 1;
	one[0][0] = 1;
	while (!move.empty()) {
		int u = move.front().first;
		int v = move.front().second;
		move.pop();
		if (u > 0) {
			bool pushit = false;
			if (map[u - 1][v] == 0) {
				if (zero[u - 1][v] > zero[u][v] + 1) {
					zero[u - 1][v] = zero[u][v] + 1;
					pushit = true;
				}
				if (one[u - 1][v] > one[u][v] + 1) {
					one[u - 1][v] = one[u][v] + 1;
					pushit = true;
				}
			}
			else if (map[u - 1][v] == 1) {
				if (one[u - 1][v] > zero[u][v] + 1) {
					one[u - 1][v] = zero[u][v] + 1;
					pushit = true;
				}
			}
			if (pushit) {
				move.push(make_pair(u - 1, v));
			}
		}
		if (u < n - 1) {
			bool pushit = false;
			if (map[u + 1][v] == 0) {
				if (zero[u + 1][v] > zero[u][v] + 1) {
					zero[u + 1][v] = zero[u][v] + 1;
					pushit = true;
				}
				if (one[u + 1][v] > one[u][v] + 1) {
					one[u + 1][v] = one[u][v] + 1;
					pushit = true;
				}
			}
			else if (map[u + 1][v] == 1) {
				if (one[u + 1][v] > zero[u][v] + 1) {
					one[u + 1][v] = zero[u][v] + 1;
					pushit = true;
				}
			}
			if (pushit) {
				move.push(make_pair(u + 1, v));
			}
		}
		if (v > 0) {
			bool pushit = false;
			if (map[u][v - 1] == 0) {
				if (zero[u][v - 1] > zero[u][v] + 1) {
					zero[u][v - 1] = zero[u][v] + 1;
					pushit = true;
				}
				if (one[u][v - 1] > one[u][v] + 1) {
					one[u][v - 1] = one[u][v] + 1;
					pushit = true;
				}
			}
			else if (map[u][v - 1] == 1) {
				if (one[u][v - 1] > zero[u][v] + 1) {
					one[u][v - 1] = zero[u][v] + 1;
					pushit = true;
				}
			}
			if (pushit) {
				move.push(make_pair(u, v - 1));
			}
		}
		if (v < m - 1) {
			bool pushit = false;
			if (map[u][v + 1] == 0) {
				if (zero[u][v + 1] > zero[u][v] + 1) {
					zero[u][v + 1] = zero[u][v] + 1;
					pushit = true;
				}
				if (one[u][v + 1] > one[u][v] + 1) {
					one[u][v + 1] = one[u][v] + 1;
					pushit = true;
				}
			}
			else if (map[u][v + 1] == 1) {
				if (one[u][v + 1] > zero[u][v] + 1) {
					one[u][v + 1] = zero[u][v] + 1;
					pushit = true;
				}
			}
			if (pushit) {
				move.push(make_pair(u, v + 1));
			}
		}
	}
	if (zero[n - 1][m - 1] == 1000001 && one[n - 1][m - 1] == 1000001) {
		cout << -1;
	}
	else {
		cout << min(zero[n - 1][m - 1], one[n - 1][m - 1]);
	}
}