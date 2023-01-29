#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, lands;
	cin >> n >> m;
	vector<vector<int>> map(n, vector<int>(m));
	vector<vector<int>> maptemp(n, vector<int>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
			maptemp[i][j] = map[i][j];
		}
	}
	int year = 0;
	bool twolandexist = false;
	bool noland = false;
	while (!twolandexist && !noland) {
		vector<vector<bool>> land(n, vector<bool>(m));
		queue<pair<int, int>> oneland;
		lands = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (map[i][j] > 0 && land[i][j] == false) {
					land[i][j] = true;
					oneland.push(make_pair(i, j));
					while (!oneland.empty()) {
						int u = oneland.front().first;
						int v = oneland.front().second;
						oneland.pop();
						if (u > 0) {
							if (map[u - 1][v] > 0 && land[u - 1][v] == false) {
								land[u - 1][v] = true;
								oneland.push(make_pair(u - 1, v));
							}
						}
						if (u < n - 1) {
							if (map[u + 1][v] > 0 && land[u + 1][v] == false) {
								land[u + 1][v] = true;
								oneland.push(make_pair(u + 1, v));
							}
						}
						if (v > 0) {
							if (map[u][v - 1] > 0 && land[u][v - 1] == false) {
								land[u][v - 1] = true;
								oneland.push(make_pair(u, v - 1));
							}
						}
						if (v < m - 1) {
							if (map[u][v + 1] > 0 && land[u][v + 1] == false) {
								land[u][v + 1] = true;
								oneland.push(make_pair(u, v + 1));
							}
						}
					}
					lands++;
				}
			}
		}
		if (lands > 1) {
			twolandexist = true;
			break;
		}
		else if (lands == 0) {
			noland = true;
			break;
		}
		else {
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					if (map[i][j] > 0) {
						if (i > 0) {
							if (map[i - 1][j] == 0) {
								maptemp[i][j] = max(maptemp[i][j] - 1, 0);
							}
						}
						if (i < n - 1) {
							if (map[i + 1][j] == 0) {
								maptemp[i][j] = max(maptemp[i][j] - 1, 0);
							}
						}
						if (j > 0) {
							if (map[i][j - 1] == 0) {
								maptemp[i][j] = max(maptemp[i][j] - 1, 0);
							}
						}
						if (j < m - 1) {
							if (map[i][j + 1] == 0) {
								maptemp[i][j] = max(maptemp[i][j] - 1, 0);
							}
						}
					}
				}
			}
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					map[i][j] = maptemp[i][j];
				}
			}
			year++;
		}
	}
	if (twolandexist) {
		cout << year;
	}
	else {
		cout << 0;
	}
}