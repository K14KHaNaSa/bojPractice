#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int m, n, u, v;
	char c;
	char map[100][100];
	queue<pair<int, int>> same;
	int w = 0;
	int b = 0;
	cin >> m >> n;
	for (int i = 0; i < n; i++) {
		c = cin.get();
		for (int j = 0; j < m; j++) {
			c = cin.get();
			map[i][j] = c;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (map[i][j] == 'W' || map[i][j] == 'B') {
				same.push(make_pair(i, j));
				c = map[i][j];
				map[i][j] = '.';
				int army = 1;
				while (!same.empty()) {
					u = same.front().first;
					v = same.front().second;
					same.pop();
					if (u > 0) {
						if (map[u - 1][v] == c) {
							map[u - 1][v] = '.';
							army++;
							same.push(make_pair(u - 1, v));
						}
					}
					if (u < n - 1) {
						if (map[u + 1][v] == c) {
							map[u + 1][v] = '.';
							army++;
							same.push(make_pair(u + 1, v));
						}
					}
					if (v > 0) {
						if (map[u][v - 1] == c) {
							map[u][v - 1] = '.';
							army++;
							same.push(make_pair(u, v - 1));
						}
					}
					if (v < m - 1) {
						if (map[u][v + 1] == c) {
							map[u][v + 1] = '.';
							army++;
							same.push(make_pair(u, v + 1));
						}
					}
				}
				if (c == 'W')
					w += army * army;
				if (c == 'B')
					b += army * army;
			}
		}
	}
	cout << w << " " << b;
}