#include <iostream>
using namespace std;

int n, m, cctvs = 0, answer = 64;
int map[8][8];
int simulationmap[8][8];
int cctv[8][4]; // cctv area and type [i, j, type, dir]
// type 1 : 0h - 0 / 3h - 1 / 6h - 2 / 9h - 3
// type 2 : 0h+6h - 0 / 3h+9h - 1
// type 3 : 0h+3h - 0 / 3h+6h - 1 / 6h+9h - 2 / 9h+0h - 3
// type 4 : 0h+3h+6h - 0 / 3h+6h+9h - 1 / 6h+9h+0h - 2 / 9h+0h+3h - 3
// type 5 : exist only 0
void up(int u, int v) {
	for (int i = u - 1; i >= 0; i--) {
		if (simulationmap[i][v] == 0) {
			simulationmap[i][v] = 1;
		}
		else if (simulationmap[i][v] == 6) {
			break;
		}
	}
}
void down(int u, int v) {
	for (int i = u + 1; i < n; i++) {
		if (simulationmap[i][v] == 0) {
			simulationmap[i][v] = 1;
		}
		else if (simulationmap[i][v] == 6) {
			break;
		}
	}
}
void left(int u, int v) {
	for (int j = v - 1; j >= 0; j--) {
		if (simulationmap[u][j] == 0) {
			simulationmap[u][j] = 1;
		}
		else if (simulationmap[u][j] == 6) {
			break;
		}
	}
}
void right(int u, int v) {
	for (int j = v + 1; j < m; j++) {
		if (simulationmap[u][j] == 0) {
			simulationmap[u][j] = 1;
		}
		else if (simulationmap[u][j] == 6) {
			break;
		}
	}
}
void test(int setcctvs) {
	if (setcctvs == cctvs) {
		//set map for simulation
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				simulationmap[i][j] = map[i][j];
			}
		}
		//simulation
		for (int i = 0; i < cctvs; i++) {
			int u = cctv[i][0];
			int v = cctv[i][1];
			if (cctv[i][2] == 1) {
				if (cctv[i][3] == 0) {
					up(u, v);
				}
				else if (cctv[i][3] == 1) {
					right(u, v);
				}
				else if (cctv[i][3] == 2) {
					down(u, v);
				}
				else if (cctv[i][3] == 3) {
					left(u, v);
				}
			}
			else if (cctv[i][2] == 2) {
				if (cctv[i][3] == 0) {
					up(u, v);
					down(u, v);
				}
				else if (cctv[i][3] == 1) {
					left(u, v);
					right(u, v);
				}
			}
			else if (cctv[i][2] == 3) {
				if (cctv[i][3] == 0) {
					up(u, v);
					right(u, v);
				}
				else if (cctv[i][3] == 1) {
					right(u, v);
					down(u, v);
				}
				else if (cctv[i][3] == 2) {
					down(u, v);
					left(u, v);
				}
				else if (cctv[i][3] == 3) {
					up(u, v);
					left(u, v);
				}
			}
			else if (cctv[i][2] == 4) {
				if (cctv[i][3] == 0) {
					up(u, v);
					right(u, v);
					down(u, v);
				}
				else if (cctv[i][3] == 1) {
					right(u, v);
					down(u, v);
					left(u, v);
				}
				else if (cctv[i][3] == 2) {
					up(u, v);
					down(u, v);
					left(u, v);
				}
				else if (cctv[i][3] == 3) {
					up(u, v);
					right(u, v);
					left(u, v);
				}
			}
			else if (cctv[i][2] == 5) {
				up(u, v);
				down(u, v);
				left(u, v);
				right(u, v);
			}
		}
		//simulation result
		int remainzero = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (simulationmap[i][j] == 0) {
					remainzero++;
				}
			}
		}
		answer = min(answer, remainzero);
	}
	else {
		int cctvtype = cctv[setcctvs][2];
		if (cctvtype == 1 || cctvtype == 3 || cctvtype == 4) {
			for (int j = 0; j < 4; j++) {
				cctv[setcctvs][3] = j;
				test(setcctvs + 1);
			}
		}
		else if (cctvtype == 2) {
			for (int j = 0; j < 2; j++) {
				cctv[setcctvs][3] = j;
				test(setcctvs + 1);
			}
		}
		else if (cctvtype == 5) {
			cctv[setcctvs][3] = 0;
			test(setcctvs + 1);
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
			if (map[i][j] > 0 && map[i][j] < 6) {
				cctv[cctvs][0] = i;
				cctv[cctvs][1] = j;
				cctv[cctvs][2] = map[i][j];
				cctvs++;
			}
		}
	}
	test(0);
	cout << answer;
}