#include <iostream>
#include <queue>
using namespace std;

int h, w;
int map[500][500];
bool maptype[500][500]; // false = . // true = #

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> h >> w;
	char mt;
	for (int i = 0; i < h; i++) {
		mt = cin.get();
		for (int j = 0; j < w; j++) {
			mt = cin.get();
			if (mt == '#') {
				maptype[i][j] = true;
			}
			else {
				maptype[i][j] = false;
			}
			map[i][j] = 500001; // reset max
		}
	}
	queue<pair<int, int>> move; //  u , v
	move.push(make_pair(0, 0));
	map[0][0] = 0;
	while (!move.empty()) {
		int u = move.front().first;
		int v = move.front().second;
		bool ttype = maptype[u][v];
		int nmc = map[u][v] + 1;
		move.pop();
		if (u > 0) {
			if (maptype[u - 1][v] != ttype && map[u - 1][v] > nmc) {
				map[u - 1][v] = nmc;
				move.push(make_pair(u - 1, v));
			}
		}
		if (u < h - 1) {
			if (maptype[u + 1][v] != ttype && map[u + 1][v] > nmc) {
				map[u + 1][v] = nmc;
				move.push(make_pair(u + 1, v));
			}
		}
		if (v > 0) {
			if (maptype[u][v - 1] != ttype && map[u][v - 1] > nmc) {
				map[u][v - 1] = nmc;
				move.push(make_pair(u, v - 1));
			}
		}
		if (v < w - 1) {
			if (maptype[u][v + 1] != ttype && map[u][v + 1] > nmc) {
				map[u][v + 1] = nmc;
				move.push(make_pair(u, v + 1));
			}
		}
	}
	if (map[h - 1][w - 1] > 500000) {
		cout << "-1";
	}
	else {
		cout << map[h - 1][w - 1];
	}
}