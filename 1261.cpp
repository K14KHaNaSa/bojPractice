#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	char type;
	cin >> m >> n;
	vector<vector<int>> map(n, vector<int>(m));
	vector<vector<int>> brk(n, vector<int>(m, 10000));
	for (int i = 0; i < n; i++) {
		type = cin.get();
		for (int j = 0; j < m; j++) {
			type = cin.get();
			if (type == '0') {
				map[i][j] = 0;
			}
			else if (type == '1') {
				map[i][j] = 1;
			}
		}
	}
	brk[0][0] = 0;
	queue<pair<int, int>> move;
	move.push(make_pair(0, 0));
	while (!move.empty()) {
		int u = move.front().first;
		int v = move.front().second;
		move.pop();
		if (u > 0) {
			if (map[u - 1][v] == 0 && brk[u - 1][v] > brk[u][v]) {
				brk[u - 1][v] = brk[u][v];
				move.push(make_pair(u - 1, v));
			}
			else if (map[u - 1][v] == 1 && brk[u - 1][v] > brk[u][v] + 1) {
				brk[u - 1][v] = brk[u][v] + 1;
				move.push(make_pair(u - 1, v));
			}
		}
		if (u < n - 1) {
			if (map[u + 1][v] == 0 && brk[u + 1][v] > brk[u][v]) {
				brk[u + 1][v] = brk[u][v];
				move.push(make_pair(u + 1, v));
			}
			else if (map[u + 1][v] == 1 && brk[u + 1][v] > brk[u][v] + 1) {
				brk[u + 1][v] = brk[u][v] + 1;
				move.push(make_pair(u + 1, v));
			}
		}
		if (v > 0) {
			if (map[u][v - 1] == 0 && brk[u][v - 1] > brk[u][v]) {
				brk[u][v - 1] = brk[u][v];
				move.push(make_pair(u, v - 1));
			}
			else if (map[u][v - 1] == 1 && brk[u][v - 1] > brk[u][v] + 1) {
				brk[u][v - 1] = brk[u][v] + 1;
				move.push(make_pair(u, v - 1));
			}
		}
		if (v < m - 1) {
			if (map[u][v + 1] == 0 && brk[u][v + 1] > brk[u][v]) {
				brk[u][v + 1] = brk[u][v];
				move.push(make_pair(u, v + 1));
			}
			else if (map[u][v + 1] == 1 && brk[u][v + 1] > brk[u][v] + 1) {
				brk[u][v + 1] = brk[u][v] + 1;
				move.push(make_pair(u, v + 1));
			}
		}
	}
	cout << brk[n - 1][m - 1];
}