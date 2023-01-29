#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, color;
	cin >> n;
	color = cin.get();
	vector<vector<int>> map(n, vector<int>(n));
	vector<vector<int>> btw(n, vector<int>(n,2501));
	queue<pair<int, int>> leastmove;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			color = cin.get();
			if (color == 48) {
				map[i][j] = 0;
			}
			else if (color == 49) {
				map[i][j] = 1;
			}
		}
		color = cin.get();
	}
	leastmove.push(make_pair(0, 0));
	btw[0][0] = 0;
	while (!leastmove.empty()) {
		int u = leastmove.front().first;
		int v = leastmove.front().second;
		leastmove.pop();
		if (u > 0) {
			if (map[u - 1][v] == 1) {
				if (btw[u - 1][v] > btw[u][v]) {
					btw[u - 1][v] = btw[u][v];
					leastmove.push(make_pair(u - 1, v));
				}
			}
			else if (map[u - 1][v] == 0) {
				if (btw[u - 1][v] > btw[u][v] + 1) {
					btw[u - 1][v] = btw[u][v] + 1;
					leastmove.push(make_pair(u - 1, v));
				}
			}
		}
		if (u < n - 1) {
			if (map[u + 1][v] == 1) {
				if (btw[u + 1][v] > btw[u][v]) {
					btw[u + 1][v] = btw[u][v];
					leastmove.push(make_pair(u + 1, v));
				}
			}
			else if (map[u + 1][v] == 0) {
				if (btw[u + 1][v] > btw[u][v] + 1) {
					btw[u + 1][v] = btw[u][v] + 1;
					leastmove.push(make_pair(u + 1, v));
				}
			}
		}
		if (v > 0) {
			if (map[u][v - 1] == 1) {
				if (btw[u][v - 1] > btw[u][v]) {
					btw[u][v - 1] = btw[u][v];
					leastmove.push(make_pair(u, v - 1));
				}
			}
			else if (map[u][v - 1] == 0) {
				if (btw[u][v - 1] > btw[u][v] + 1) {
					btw[u][v - 1] = btw[u][v] + 1;
					leastmove.push(make_pair(u, v - 1));
				}
			}
		}
		if (v < n - 1) {
			if (map[u][v + 1] == 1) {
				if (btw[u][v + 1] > btw[u][v]) {
					btw[u][v + 1] = btw[u][v];
					leastmove.push(make_pair(u, v + 1));
				}
			}
			else if (map[u][v + 1] == 0) {
				if (btw[u][v + 1] > btw[u][v] + 1) {
					btw[u][v + 1] = btw[u][v] + 1;
					leastmove.push(make_pair(u, v + 1));
				}
			}
		}
	}
	cout << btw[n - 1][n - 1];
}