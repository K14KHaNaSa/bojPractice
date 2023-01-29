#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int w, h, island;
	cin >> w >> h;
	while (w + h > 0) {
		vector<vector<int>> map(h, vector<int>(w));
		queue<pair<int, int>> land;
		island = 0;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> map[i][j];
			}
		}
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (map[i][j] == 1) {
					land.push(make_pair(i, j));
					map[i][j] = 0;
					while (!land.empty()) {
						int u = land.front().first;
						int v = land.front().second;
						land.pop();
						if (u > 0) {
							if (v > 0) {
								if (map[u - 1][v - 1] == 1) {
									map[u - 1][v - 1] = 0;
									land.push(make_pair(u - 1, v - 1));
								}
							}
							if (v < w - 1) {
								if (map[u - 1][v + 1] == 1) {
									map[u - 1][v + 1] = 0;
									land.push(make_pair(u - 1, v + 1));
								}
							}
							if (map[u - 1][v] == 1) {
								map[u - 1][v] = 0;
								land.push(make_pair(u - 1, v));
							}
						}
						if (u < h - 1) {
							if (v > 0) {
								if (map[u + 1][v - 1] == 1) {
									map[u + 1][v - 1] = 0;
									land.push(make_pair(u + 1, v - 1));
								}
							}
							if (v < w - 1) {
								if (map[u + 1][v + 1] == 1) {
									map[u + 1][v + 1] = 0;
									land.push(make_pair(u + 1, v + 1));
								}
							}
							if (map[u + 1][v] == 1) {
								map[u + 1][v] = 0;
								land.push(make_pair(u + 1, v));
							}
						}
						if (v > 0) {
							if (map[u][v - 1] == 1) {
								map[u][v - 1] = 0;
								land.push(make_pair(u, v - 1));
							}
						}
						if (v < w - 1) {
							if (map[u][v + 1] == 1) {
								map[u][v + 1] = 0;
								land.push(make_pair(u, v + 1));
							}
						}
					}
					island++;
				}
			}
		}
		cout << island << "\n";
		cin >> w >> h;
	}
}