#include <iostream>
#include <queue>
using namespace std;

bool maze[102][102] = { false };
int mazestep[102][102];
int n, m, move;

int bfs(int u, int v) {
	queue<pair<int, int>> moving;
	int move = 0;
	moving.push(pair<int, int>(u, v));
	maze[u][v] = false;
	while (!moving.empty()) {
		int x = moving.front().first;
		int y = moving.front().second;
		moving.pop();
		move++;
		if (x == n && y == m) {
			return 0;
		}
		if (u > 0 || u <= n || v > 0 || v <= m) {
			if (maze[x + 1][y]) {
				moving.push(pair<int, int>(x + 1, y));
				maze[x + 1][y] = false;
				mazestep[x + 1][y] = mazestep[x][y] + 1;
			}
			if (maze[x][y + 1]) {
				moving.push(pair<int, int>(x, y + 1));
				maze[x][y + 1] = false;
				mazestep[x][y + 1] = mazestep[x][y] + 1;
			}
			if (maze[x - 1][y]) {
				moving.push(pair<int, int>(x - 1, y));
				maze[x - 1][y] = false;
				mazestep[x - 1][y] = mazestep[x][y] + 1;
			}
			if (maze[x][y - 1]) {
				moving.push(pair<int, int>(x, y - 1));
				maze[x][y - 1] = false;
				mazestep[x][y - 1] = mazestep[x][y] + 1;
			}
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int map;
	cin >> n >> m;
	map = cin.get();
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			map = cin.get();
			if (map == 49) {
				maze[i][j] = true;
			}
		}
		map = cin.get();
	}
	bfs(1, 1);
	cout << mazestep[n][m] + 1;
}