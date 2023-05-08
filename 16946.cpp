#include <iostream>
#include <queue>
using namespace std;

int n, m;
bool map[1000][1000]; // false = 0 / true = 1
int blocks[1000][1000];
bool searched[1000][1000];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	char maptype;
	for (int i = 0; i < n; i++) {
		maptype = cin.get();
		for (int j = 0; j < m; j++) {
			maptype = cin.get();
			if (maptype == '0') {
				map[i][j] = false;
			}
			else {
				map[i][j] = true;
			}
			blocks[i][j] = 0;
			searched[i][j] = false;
		}
	}
	queue<pair<int, int>> zeros;
	queue<pair<int, int>> blanks;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (!map[i][j] && !searched[i][j]) {
				zeros.push(make_pair(i, j));
				searched[i][j] = true;
				int zerocount = 0;
				while (!zeros.empty()) {
					int u = zeros.front().first;
					int v = zeros.front().second;
					zeros.pop();
					zerocount++;
					if (u > 0) {
						if (!map[u - 1][v] && !searched[u - 1][v]) {
							zeros.push(make_pair(u - 1, v));
							searched[u - 1][v] = true;
						}
						if (map[u - 1][v] && !searched[u - 1][v]) {
							blanks.push(make_pair(u - 1, v));
							searched[u - 1][v] = true;
						}
					}
					if (u < n - 1) {
						if (!map[u + 1][v] && !searched[u + 1][v]) {
							zeros.push(make_pair(u + 1, v));
							searched[u + 1][v] = true;
						}
						if (map[u + 1][v] && !searched[u + 1][v]) {
							blanks.push(make_pair(u + 1, v));
							searched[u + 1][v] = true;
						}
					}
					if (v > 0) {
						if (!map[u][v - 1] && !searched[u][v - 1]) {
							zeros.push(make_pair(u, v - 1));
							searched[u][v - 1] = true;
						}
						if (map[u][v - 1] && !searched[u][v - 1]) {
							blanks.push(make_pair(u, v - 1));
							searched[u][v - 1] = true;
						}
					}
					if (v < m - 1) {
						if (!map[u][v + 1] && !searched[u][v + 1]) {
							zeros.push(make_pair(u, v + 1));
							searched[u][v + 1] = true;
						}
						if (map[u][v + 1] && !searched[u][v + 1]) {
							blanks.push(make_pair(u, v + 1));
							searched[u][v + 1] = true;
						}
					}
				}
				while (!blanks.empty()) {
					int u = blanks.front().first;
					int v = blanks.front().second;
					blocks[u][v] += zerocount;
					searched[u][v] = false;
					blanks.pop();
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (map[i][j]) {
				cout << (blocks[i][j] + 1) % 10;
			}
			else {
				cout << "0";
			}
		}
		cout << "\n";
	}
}