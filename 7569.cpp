#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

bool ripen[101][101][101] = { false };
int tomato[101][101][101] = { 0 };
int n, m, h;
queue<tuple<int, int, int>> ripening;

int bfs(int u, int v, int w) {
	ripening.push(tuple<int, int, int>(u, v, w));
	ripen[u][v][w] = false;
	while (!ripening.empty()) {
		int x = get<0>(ripening.front());
		int y = get<1>(ripening.front());
		int z = get<2>(ripening.front());
		ripening.pop();
		if (x < n) {
			if (ripen[x + 1][y][z]) {
				ripening.push(tuple<int, int, int>(x + 1, y, z));
				ripen[x + 1][y][z] = false;
				tomato[x + 1][y][z] = tomato[x][y][z] + 1;
			}
		}
		if (y < m) {
			if (ripen[x][y + 1][z]) {
				ripening.push(tuple<int, int, int>(x, y + 1, z));
				ripen[x][y + 1][z] = false;
				tomato[x][y + 1][z] = tomato[x][y][z] + 1;
			}
		}
		if (x > 0) {
			if (ripen[x - 1][y][z]) {
				ripening.push(tuple<int, int, int>(x - 1, y, z));
				ripen[x - 1][y][z] = false;
				tomato[x - 1][y][z] = tomato[x][y][z] + 1;
			}
		}
		if (y > 0) {
			if (ripen[x][y - 1][z]) {
				ripening.push(tuple<int, int, int>(x, y - 1, z));
				ripen[x][y - 1][z] = false;
				tomato[x][y - 1][z] = tomato[x][y][z] + 1;
			}
		}
		if (z > 0) {
			if (ripen[x][y][z - 1]) {
				ripening.push(tuple<int, int, int>(x, y, z - 1));
				ripen[x][y][z - 1] = false;
				tomato[x][y][z - 1] = tomato[x][y][z] + 1;
			}
		}
		if (z < h) {
			if (ripen[x][y][z + 1]) {
				ripening.push(tuple<int, int, int>(x, y, z + 1));
				ripen[x][y][z + 1] = false;
				tomato[x][y][z + 1] = tomato[x][y][z] + 1;
			}
		}
		if (ripening.empty()) {
			return 0;
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int tmt;
	bool firstqueue = true;
	int startx, starty, startz;
	cin >> m >> n >> h;
	for (int k = 0; k < h; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> tmt;
				if (tmt == 1) {
					tomato[i][j][k] = 1;
					ripening.push(tuple<int, int, int>(i, j, k));
					ripen[i][j][k] = false;
					if (firstqueue) {
						startx = i;
						starty = j;
						startz = k;
						firstqueue = false;
					}
				}
				else if (tmt == 0) {
					ripen[i][j][k] = true;
				}
				else if (tmt == -1) {
					tomato[i][j][k] = -1;
				}
			}
		}
	}

	bfs(startx, starty, startz);

	int maxdays = 0;
	int notripen = false;
	for (int k = 0; k < h; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (tomato[i][j][k] > maxdays) {
					maxdays = tomato[i][j][k];
				}
				if (tomato[i][j][k] == 0) {
					notripen = true;
				}
			}
		}
	}
	if (notripen) {
		cout << -1;
	}
	else {
		cout << maxdays - 1;
	}
}