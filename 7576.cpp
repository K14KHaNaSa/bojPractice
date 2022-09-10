#include <iostream>
#include <queue>
using namespace std;

bool ripen[1001][1001] = { false };
int tomato[1001][1001] = { 0 };
int n, m, dayz;
queue<pair<int, int>> ripening;

int bfs(int u, int v) {
	int dayz = 0;
	ripening.push(pair<int, int>(u, v));
	ripen[u][v] = false;
	while (!ripening.empty()) {
		int x = ripening.front().first;
		int y = ripening.front().second;
		ripening.pop();
		dayz++;
		if (x < n) {
			if (ripen[x + 1][y]) {
				ripening.push(pair<int, int>(x + 1, y));
				ripen[x + 1][y] = false;
				tomato[x + 1][y] = tomato[x][y] + 1;
			}
		}
		if (y < m) {
			if (ripen[x][y + 1]) {
				ripening.push(pair<int, int>(x, y + 1));
				ripen[x][y + 1] = false;
				tomato[x][y + 1] = tomato[x][y] + 1;
			}
		}
		if (x > 0) {
			if (ripen[x - 1][y]) {
				ripening.push(pair<int, int>(x - 1, y));
				ripen[x - 1][y] = false;
				tomato[x - 1][y] = tomato[x][y] + 1;
			}
		}
		if (y > 0) {
			if (ripen[x][y - 1]) {
				ripening.push(pair<int, int>(x, y - 1));
				ripen[x][y - 1] = false;
				tomato[x][y - 1] = tomato[x][y] + 1;
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
	int startx, starty;
	cin >> m >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> tmt;
			if (tmt == 1) {
				tomato[i][j] = 1;
				ripening.push(pair<int, int>(i, j));
				ripen[i][j] = false;
				if (firstqueue) {
					startx = i;
					starty = j;
					firstqueue = false;
				}
			}
			else if (tmt == 0) {
				ripen[i][j] = true;
			}
			else if (tmt == -1) {
				tomato[i][j] = -1;
			}
		}
	}

	bfs(startx, starty);

	int maxdays = 0;
	int notripen = false;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (tomato[i][j] > maxdays) {
				maxdays = tomato[i][j];
			}
			if (tomato[i][j] == 0) {
				notripen = true;
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