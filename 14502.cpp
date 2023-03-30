#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int map[8][8];
int n, m, blanks, virus, answer;
int blank[64][2]; // [u, v](0 point) * 0 areas
int viru[10][2]; // [u, v](virus point) * 2 areas
int wallset[3]; // array "blank" index

void wall(int wallnumber, int walls) {
	if (walls == 3) {
		//virus infesting test
		int testmap[8][8];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				testmap[i][j] = map[i][j];
			}
		}
		for (int i = 0; i < 3; i++) {
			int windex = wallset[i];
			testmap[blank[windex][0]][blank[windex][1]] = 1;
		}
		queue<pair<int, int>> virusmove;
		for (int i = 0; i < virus; i++) {
			virusmove.push(make_pair(viru[i][0], viru[i][1]));
		}
		while (!virusmove.empty()) {
			int u = virusmove.front().first;
			int v = virusmove.front().second;
			virusmove.pop();
			if (u > 0) {
				if (testmap[u - 1][v] == 0) {
					testmap[u - 1][v] = 2;
					virusmove.push(make_pair(u - 1, v));
				}
			}
			if (u < n - 1) {
				if (testmap[u + 1][v] == 0) {
					testmap[u + 1][v] = 2;
					virusmove.push(make_pair(u + 1, v));
				}
			}
			if (v > 0) {
				if (testmap[u][v - 1] == 0) {
					testmap[u][v - 1] = 2;
					virusmove.push(make_pair(u, v - 1));
				}
			}
			if (v < m - 1) {
				if (testmap[u][v + 1] == 0) {
					testmap[u][v + 1] = 2;
					virusmove.push(make_pair(u, v + 1));
				}
			}
		}
		int panicroom = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (testmap[i][j] == 0) {
					panicroom++;
				}
			}
		}
		answer = max(answer, panicroom);
	}
	else {
		for (int i = wallnumber; i < blanks; i++) {
			wallset[walls] = i;
			wall(i + 1, walls + 1);
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	blanks = 0;
	virus = 0;
	answer = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
			if (map[i][j] == 0) {
				blank[blanks][0] = i;
				blank[blanks][1] = j;
				blanks++;
			}
			if (map[i][j] == 2) {
				viru[virus][0] = i;
				viru[virus][1] = j;
				virus++;
			}
		}
	}
	wall(0, 0);
	cout << answer;
}