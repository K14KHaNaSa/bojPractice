#include <iostream>
#include <queue>
using namespace std;

int basicmap[4][5][5][5];
int tempmap[5][5][5];
bool maptype[5];
bool visit[5][5][5];
int answer;

void bt(int maps) {
	if (maps == 5) {
		if (tempmap[0][0][0] == 1 && tempmap[4][4][4] == 1) {
			queue<pair<pair<int, int>, pair<int, int>>> move; //movecount, level, u, v
			move.push(make_pair(make_pair(0, 0), make_pair(0, 0)));
			for (int a = 0; a < 5; a++) {
				for (int b = 0; b < 5; b++) {
					for (int c = 0; c < 5; c++) {
						visit[a][b][c] = false;
					}
				}
			}
			visit[0][0][0] = true;
			bool finish = false;
			while (!move.empty() && !finish) {
				int mc = move.front().first.first;
				int lv = move.front().first.second;
				int u = move.front().second.first;
				int v = move.front().second.second;
				move.pop();
				if (lv > 0) {
					if (tempmap[lv - 1][u][v] == 1 && !visit[lv - 1][u][v] && mc + 1 <= answer) {
						visit[lv - 1][u][v] = true;
						move.push(make_pair(make_pair(mc + 1, lv - 1), make_pair(u, v)));
					}
				}
				if (lv < 4 && !finish) {
					if (tempmap[lv + 1][u][v] == 1 && !visit[lv + 1][u][v] && mc + 1 <= answer) {
						if (lv == 3 && u == 4 && v == 4) {
							answer = min(answer, mc + 1);
							finish = true;
							while (!move.empty()) {
								move.pop();
							}
						}
						else {
							visit[lv + 1][u][v] = true;
							move.push(make_pair(make_pair(mc + 1, lv + 1), make_pair(u, v)));
						}
					}
				}
				if (u > 0) {
					if (tempmap[lv][u - 1][v] == 1 && !visit[lv][u - 1][v] && mc + 1 <= answer) {
						visit[lv][u - 1][v] = true;
						move.push(make_pair(make_pair(mc + 1, lv), make_pair(u - 1, v)));
					}
				}
				if (u < 4 && !finish) {
					if (tempmap[lv][u + 1][v] == 1 && !visit[lv][u + 1][v] && mc + 1 <= answer) {
						if (lv == 4 && u == 3 && v == 4) {
							answer = min(answer, mc + 1);
							finish = true;
							while (!move.empty()) {
								move.pop();
							}
						}
						else {
							visit[lv][u + 1][v] = true;
							move.push(make_pair(make_pair(mc + 1, lv), make_pair(u + 1, v)));
						}
					}
				}
				if (v > 0) {
					if (tempmap[lv][u][v - 1] == 1 && !visit[lv][u][v - 1] && mc + 1 <= answer) {
						visit[lv][u][v - 1] = true;
						move.push(make_pair(make_pair(mc + 1, lv), make_pair(u, v - 1)));
					}
				}
				if (v < 4 && !finish) {
					if (tempmap[lv][u][v + 1] == 1 && !visit[lv][u][v + 1] && mc + 1 <= answer) {
						if (lv == 4 && u == 4 && v == 3) {
							answer = min(answer, mc + 1);
							finish = true;
							while (!move.empty()) {
								move.pop();
							}
						}
						else {
							visit[lv][u][v + 1] = true;
							move.push(make_pair(make_pair(mc + 1, lv), make_pair(u, v + 1)));
						}
					}
				}
			}
		}
	}
	else {
		for (int i = 0; i < 5; i++) {
			if (!maptype[i]) {
				maptype[i] = true;
				for (int j = 0; j < 4; j++) {
					for (int u = 0; u < 5; u++) {
						for (int v = 0; v < 5; v++) {
							tempmap[maps][u][v] = basicmap[j][i][u][v];
						}
					}
					bt(maps + 1);
				}
				maptype[i] = false;
			}
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	answer = 500001;
	for (int k = 0; k < 5; k++) {
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				cin >> basicmap[0][k][i][j];
			}
		}
	}
	for (int r = 1; r < 4; r++) {
		for (int k = 0; k < 5; k++) {
			for (int i = 0; i < 5; i++) {
				for (int j = 0; j < 5; j++) {
					basicmap[r][k][j][4 - i] = basicmap[r - 1][k][i][j];
				}
			}
		}
	}
	bt(0);
	if (answer > 500000) {
		cout << "-1";
	}
	else {
		cout << answer;
	}
}