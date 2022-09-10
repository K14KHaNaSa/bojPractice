#include <iostream>
#include <queue>
using namespace std;

bool rgb[100][100] = { false };
int color[100][100];
int colorrb[100][100];
int n;

int rgbbfs(int u, int v) {
	queue<pair<int, int>> samearea;
	samearea.push(pair<int, int>(u, v));
	rgb[u][v] = true;
	int rgbcolor = color[u][v];
	while (!samearea.empty()) {
		int x = samearea.front().first;
		int y = samearea.front().second;
		samearea.pop();
		if (u >= 0 || u < n || v >= 0 || v < n) {
			if (x < n - 1) {
				if (color[x + 1][y] == rgbcolor && !rgb[x + 1][y]) {
					samearea.push(pair<int, int>(x + 1, y));
					rgb[x + 1][y] = true;
				}
			}
			if (y < n - 1) {
				if (color[x][y + 1] == rgbcolor && !rgb[x][y + 1]) {
					samearea.push(pair<int, int>(x, y + 1));
					rgb[x][y + 1] = true;
				}
			}
			if (x > 0) {
				if (color[x - 1][y] == rgbcolor && !rgb[x - 1][y]) {
					samearea.push(pair<int, int>(x - 1, y));
					rgb[x - 1][y] = true;
				}
			}
			if (y > 0) {
				if (color[x][y - 1] == rgbcolor && !rgb[x][y - 1]) {
					samearea.push(pair<int, int>(x, y - 1));
					rgb[x][y - 1] = true;
				}
			}
		}
		if (samearea.empty()) {
			return 0;
		}
	}
}

int rbbfs(int u, int v) {
	queue<pair<int, int>> samearea;
	samearea.push(pair<int, int>(u, v));
	rgb[u][v] = false;
	int rbcolor = colorrb[u][v];
	while (!samearea.empty()) {
		int x = samearea.front().first;
		int y = samearea.front().second;
		samearea.pop();
		if (u >= 0 || u < n || v >= 0 || v < n) {
			if (x < n - 1) {
				if (colorrb[x + 1][y] == rbcolor && rgb[x + 1][y]) {
					samearea.push(pair<int, int>(x + 1, y));
					rgb[x + 1][y] = false;
				}
			}
			if (y < n - 1) {
				if (colorrb[x][y + 1] == rbcolor && rgb[x][y + 1]) {
					samearea.push(pair<int, int>(x, y + 1));
					rgb[x][y + 1] = false;
				}
			}
			if (x > 0) {
				if (colorrb[x - 1][y] == rbcolor && rgb[x - 1][y]) {
					samearea.push(pair<int, int>(x - 1, y));
					rgb[x - 1][y] = false;
				}
			}
			if (y > 0) {
				if (colorrb[x][y - 1] == rbcolor && rgb[x][y - 1]) {
					samearea.push(pair<int, int>(x, y - 1));
					rgb[x][y - 1] = false;
				}
			}
		}
		if (samearea.empty()) {
			return 0;
		}
	}
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	char inputcolor;
	cin >> n;
	inputcolor = cin.get();
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			inputcolor = cin.get();
			if (inputcolor == 'R') {
				color[i][j] = 0;
				colorrb[i][j] = 0;
			}
			else if (inputcolor == 'G') {
				color[i][j] = 1;
				colorrb[i][j] = 0;
			}
			else if (inputcolor == 'B') {
				color[i][j] = 2;
				colorrb[i][j] = 1;
			}
		}
		inputcolor = cin.get();
	}

	int rgbareas = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!rgb[i][j]) {
				rgbbfs(i, j);
				rgbareas++;
			}
		}
	}
	int rbareas = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (rgb[i][j]) {
				rbbfs(i, j);
				rbareas++;
			}
		}
	}
	cout << rgbareas << " " << rbareas;
}