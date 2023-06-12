#include <iostream>
using namespace std;

int answer;
int psize[5]; // 1*1 ~ 5*5
int map[10][10];

void paper(int h, int w, int p) {
	for (int j = w; j < 10; j++) {
		if (p + 1 < answer) {
			if (h < 6 && j < 6 && psize[4]>0) { // 5*5
				int ps = 0;
				for (int u = h; u < h + 5; u++) {
					for (int v = j; v < j + 5; v++) {
						if (map[u][v] > 0) {
							ps++;
						}
					}
				}
				if (ps == 25) {
					for (int u = h; u < h + 5; u++) {
						for (int v = j; v < j + 5; v++) {
							map[u][v] = 0;
						}
					}
					psize[4]--;
					paper(h, j, p + 1);
					psize[4]++;
					for (int u = h; u < h + 5; u++) {
						for (int v = j; v < j + 5; v++) {
							map[u][v] = 1;
						}
					}
				}
			}
			if (h < 7 && j < 7 && psize[3]>0) { // 4*4
				int ps = 0;
				for (int u = h; u < h + 4; u++) {
					for (int v = j; v < j + 4; v++) {
						if (map[u][v] > 0) {
							ps++;
						}
					}
				}
				if (ps == 16) {
					for (int u = h; u < h + 4; u++) {
						for (int v = j; v < j + 4; v++) {
							map[u][v] = 0;
						}
					}
					psize[3]--;
					paper(h, j, p + 1);
					psize[3]++;
					for (int u = h; u < h + 4; u++) {
						for (int v = j; v < j + 4; v++) {
							map[u][v] = 1;
						}
					}
				}
			}
			if (h < 8 && j < 8 && psize[2]>0) { // 3*3
				int ps = 0;
				for (int u = h; u < h + 3; u++) {
					for (int v = j; v < j + 3; v++) {
						if (map[u][v] > 0) {
							ps++;
						}
					}
				}
				if (ps == 9) {
					for (int u = h; u < h + 3; u++) {
						for (int v = j; v < j + 3; v++) {
							map[u][v] = 0;
						}
					}
					psize[2]--;
					paper(h, j, p + 1);
					psize[2]++;
					for (int u = h; u < h + 3; u++) {
						for (int v = j; v < j + 3; v++) {
							map[u][v] = 1;
						}
					}
				}
			}
			if (h < 9 && j < 9 && psize[1]>0) { // 2*2
				int ps = 0;
				for (int u = h; u < h + 2; u++) {
					for (int v = j; v < j + 2; v++) {
						if (map[u][v] > 0) {
							ps++;
						}
					}
				}
				if (ps == 4) {
					for (int u = h; u < h + 2; u++) {
						for (int v = j; v < j + 2; v++) {
							map[u][v] = 0;
						}
					}
					psize[1]--;
					paper(h, j, p + 1);
					psize[1]++;
					for (int u = h; u < h + 2; u++) {
						for (int v = j; v < j + 2; v++) {
							map[u][v] = 1;
						}
					}
				}
			}
			if (map[h][j] > 0 && psize[0] > 0) { // 1*1
				map[h][j] = 0;
				psize[0]--;
				paper(h, j, p + 1);
				psize[0]++;
				map[h][j] = 1;
			}
			if (map[h][j] > 0) {
				return;
			}
		}
	}
	if (h < 9) {
		for (int i = h + 1; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				if (p + 1 < answer) {
					if (i < 6 && j < 6 && psize[4]>0) { // 5*5
						int ps = 0;
						for (int u = i; u < i + 5; u++) {
							for (int v = j; v < j + 5; v++) {
								if (map[u][v] > 0) {
									ps++;
								}
							}
						}
						if (ps == 25) {
							for (int u = i; u < i + 5; u++) {
								for (int v = j; v < j + 5; v++) {
									map[u][v] = 0;
								}
							}
							psize[4]--;
							paper(i, j, p + 1);
							psize[4]++;
							for (int u = i; u < i + 5; u++) {
								for (int v = j; v < j + 5; v++) {
									map[u][v] = 1;
								}
							}
						}
					}
					if (i < 7 && j < 7 && psize[3]>0) { // 4*4
						int ps = 0;
						for (int u = i; u < i + 4; u++) {
							for (int v = j; v < j + 4; v++) {
								if (map[u][v] > 0) {
									ps++;
								}
							}
						}
						if (ps == 16) {
							for (int u = i; u < i + 4; u++) {
								for (int v = j; v < j + 4; v++) {
									map[u][v] = 0;
								}
							}
							psize[3]--;
							paper(i, j, p + 1);
							psize[3]++;
							for (int u = i; u < i + 4; u++) {
								for (int v = j; v < j + 4; v++) {
									map[u][v] = 1;
								}
							}
						}
					}
					if (i < 8 && j < 8 && psize[2]>0) { // 3*3
						int ps = 0;
						for (int u = i; u < i + 3; u++) {
							for (int v = j; v < j + 3; v++) {
								if (map[u][v] > 0) {
									ps++;
								}
							}
						}
						if (ps == 9) {
							for (int u = i; u < i + 3; u++) {
								for (int v = j; v < j + 3; v++) {
									map[u][v] = 0;
								}
							}
							psize[2]--;
							paper(i, j, p + 1);
							psize[2]++;
							for (int u = i; u < i + 3; u++) {
								for (int v = j; v < j + 3; v++) {
									map[u][v] = 1;
								}
							}
						}
					}
					if (i < 9 && j < 9 && psize[1]>0) { // 2*2
						int ps = 0;
						for (int u = i; u < i + 2; u++) {
							for (int v = j; v < j + 2; v++) {
								if (map[u][v] > 0) {
									ps++;
								}
							}
						}
						if (ps == 4) {
							for (int u = i; u < i + 2; u++) {
								for (int v = j; v < j + 2; v++) {
									map[u][v] = 0;
								}
							}
							psize[1]--;
							paper(i, j, p + 1);
							psize[1]++;
							for (int u = i; u < i + 2; u++) {
								for (int v = j; v < j + 2; v++) {
									map[u][v] = 1;
								}
							}
						}
					}
					if (map[i][j] > 0 && psize[0] > 0) { // 1*1
						map[i][j] = 0;
						psize[0]--;
						paper(i, j, p + 1);
						psize[0]++;
						map[i][j] = 1;
					}
					if (map[i][j] > 0) {
						return;
					}
				}
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (map[i][j] > 0) {
				return;
			}
		}
	}
	answer = min(answer, p);
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	answer = 26;
	for (int i = 0; i < 5; i++) {
		psize[i] = 5;
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> map[i][j];
		}
	}
	paper(0, 0, 0);
	if (answer > 25) {
		cout << "-1";
	}
	else {
		cout << answer;
	}
}