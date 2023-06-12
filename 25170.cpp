#include <iostream>
#include <queue>
using namespace std;

int n, m, t;
int mapdata[50][50][2]; // (works , time)
int map[50][50][501]; // u, v, time

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m >> t;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> mapdata[i][j][0];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> mapdata[i][j][1];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			for (int k = 0; k <= t; k++) {
				map[i][j][k] = -1;
			}
		}
	}
	map[0][0][0] = 0;
	queue<pair<pair<int, int>, int>> move; // area(u, v) , movedata(times)
	move.push(make_pair(make_pair(0, 0), 0));
	while (!move.empty()) {
		int u = move.front().first.first;
		int v = move.front().first.second;
		int tm = move.front().second;
		int w = map[u][v][tm];
		move.pop();
		int nw = mapdata[u][v][0];
		int nt = mapdata[u][v][1];
		if ((u < n - 1) && (v < m - 1)) {
			// work and move
			if (tm + nt + 1 <= t) {
				if (map[u + 1][v + 1][nt + tm + 1] < w + nw) {
					map[u + 1][v + 1][nt + tm + 1] = w + nw;
					move.push(make_pair(make_pair(u + 1, v + 1), nt + tm + 1));
				}
			}
			// move only
			if (tm + 1 <= t) {
				if (map[u + 1][v + 1][tm + 1] < w) {
					map[u + 1][v + 1][tm + 1] = w;
					move.push(make_pair(make_pair(u + 1, v + 1), tm + 1));
				}
			}
		}
		if (u < n - 1) {
			// work and move
			if (tm + nt + 1 <= t) {
				if (map[u + 1][v][nt + tm + 1] < w + nw) {
					map[u + 1][v][nt + tm + 1] = w + nw;
					move.push(make_pair(make_pair(u + 1, v), nt + tm + 1));
				}
			}
			// move only
			if (tm + 1 <= t) {
				if (map[u + 1][v][tm + 1] < w) {
					map[u + 1][v][tm + 1] = w;
					move.push(make_pair(make_pair(u + 1, v), tm + 1));
				}
			}
		}
		if (v < m - 1) {
			// work and move
			if (tm + nt + 1 <= t) {
				if (map[u][v + 1][nt + tm + 1] < w + nw) {
					map[u][v + 1][nt + tm + 1] = w + nw;
					move.push(make_pair(make_pair(u, v + 1), nt + tm + 1));
				}
			}
			// move only
			if (tm + 1 <= t) {
				if (map[u][v + 1][tm + 1] < w) {
					map[u][v + 1][tm + 1] = w;
					move.push(make_pair(make_pair(u, v + 1), tm + 1));
				}
			}
		}
	}
	int answer = map[n - 1][m - 1][0];
	for (int i = 1; i <= t; i++) {
		answer = max(answer, map[n - 1][m - 1][i]);
	}
	cout << answer;
}