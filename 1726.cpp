#include <iostream>
#include <queue>
using namespace std;

int m, n, fd;
int map[100][100][5]; // 0 = map data // direction 1 = east / 2 = west / 3 = south / 4 = north

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j][0];
			if (map[i][j][0] == 0) {
				for (int k = 1; k < 5; k++) {
					map[i][j][k] = 10000;
				}
			}
		}
	}
	int su, sv, d, fu, fv;
	cin >> su >> sv >> d;
	cin >> fu >> fv >> fd;
	// if start == end ?
	su--; sv--; fu--; fv--;
	map[su][sv][d] = 0;
	if (d == 1) {
		map[su][sv][2] = 2;
		map[su][sv][3] = 1;
		map[su][sv][4] = 1;
	}
	else if (d == 2) {
		map[su][sv][1] = 2;
		map[su][sv][3] = 1;
		map[su][sv][4] = 1;
	}
	else if (d == 3) {
		map[su][sv][1] = 1;
		map[su][sv][2] = 1;
		map[su][sv][4] = 2;
	}
	else if (d == 4) {
		map[su][sv][1] = 1;
		map[su][sv][2] = 1;
		map[su][sv][3] = 2;
	}
	if (!(su == fu && sv == fv)) {
		queue<pair<int, pair<int, int>>> move; // ( dir , (u, v) )
		for (int i = 1; i < 5; i++) {
			move.push(make_pair(i, make_pair(su, sv)));
		}
		while (!move.empty()) {
			int dir = move.front().first;
			int u = move.front().second.first;
			int v = move.front().second.second;
			int oc = map[u][v][dir]; // ordercount
			move.pop();
			if (dir == 1) { // go east
				if (v < n - 1) {
					if (map[u][v + 1][0] == 0) {
						if (v < n - 2) {
							if (map[u][v + 2][0] == 0) {
								if (v < n - 3) {
									if (map[u][v + 3][0] == 0) {
										if (map[u][v + 3][1] > oc + 1) {
											map[u][v + 3][1] = oc + 1;
											move.push(make_pair(1, make_pair(u, v + 3)));
										}
										if (map[u][v + 3][2] > oc + 3) {
											map[u][v + 3][2] = oc + 3;
											move.push(make_pair(2, make_pair(u, v + 3)));
										}
										if (map[u][v + 3][3] > oc + 2) {
											map[u][v + 3][3] = oc + 2;
											move.push(make_pair(3, make_pair(u, v + 3)));
										}
										if (map[u][v + 3][4] > oc + 2) {
											map[u][v + 3][4] = oc + 2;
											move.push(make_pair(4, make_pair(u, v + 3)));
										}
									}
								}
								if (map[u][v + 2][1] > oc + 1) {
									map[u][v + 2][1] = oc + 1;
									move.push(make_pair(1, make_pair(u, v + 2)));
								}
								if (map[u][v + 2][2] > oc + 3) {
									map[u][v + 2][2] = oc + 3;
									move.push(make_pair(2, make_pair(u, v + 2)));
								}
								if (map[u][v + 2][3] > oc + 2) {
									map[u][v + 2][3] = oc + 2;
									move.push(make_pair(3, make_pair(u, v + 2)));
								}
								if (map[u][v + 2][4] > oc + 2) {
									map[u][v + 2][4] = oc + 2;
									move.push(make_pair(4, make_pair(u, v + 2)));
								}
							}
						}
						if (map[u][v + 1][1] > oc + 1) {
							map[u][v + 1][1] = oc + 1;
							move.push(make_pair(1, make_pair(u, v + 1)));
						}
						if (map[u][v + 1][2] > oc + 3) {
							map[u][v + 1][2] = oc + 3;
							move.push(make_pair(2, make_pair(u, v + 1)));
						}
						if (map[u][v + 1][3] > oc + 2) {
							map[u][v + 1][3] = oc + 2;
							move.push(make_pair(3, make_pair(u, v + 1)));
						}
						if (map[u][v + 1][4] > oc + 2) {
							map[u][v + 1][4] = oc + 2;
							move.push(make_pair(4, make_pair(u, v + 1)));
						}
					}
				}
			}
			else if (dir == 2) { // go west
				if (v > 0) {
					if (map[u][v - 1][0] == 0) {
						if (v > 1) {
							if (map[u][v - 2][0] == 0) {
								if (v > 2) {
									if (map[u][v - 3][0] == 0) {
										if (map[u][v - 3][1] > oc + 3) {
											map[u][v - 3][1] = oc + 3;
											move.push(make_pair(1, make_pair(u, v - 3)));
										}
										if (map[u][v - 3][2] > oc + 1) {
											map[u][v - 3][2] = oc + 1;
											move.push(make_pair(2, make_pair(u, v - 3)));
										}
										if (map[u][v - 3][3] > oc + 2) {
											map[u][v - 3][3] = oc + 2;
											move.push(make_pair(3, make_pair(u, v - 3)));
										}
										if (map[u][v - 3][4] > oc + 2) {
											map[u][v - 3][4] = oc + 2;
											move.push(make_pair(4, make_pair(u, v - 3)));
										}
									}
								}
								if (map[u][v - 2][1] > oc + 3) {
									map[u][v - 2][1] = oc + 3;
									move.push(make_pair(1, make_pair(u, v - 2)));
								}
								if (map[u][v - 2][2] > oc + 1) {
									map[u][v - 2][2] = oc + 1;
									move.push(make_pair(2, make_pair(u, v - 2)));
								}
								if (map[u][v - 2][3] > oc + 2) {
									map[u][v - 2][3] = oc + 2;
									move.push(make_pair(3, make_pair(u, v - 2)));
								}
								if (map[u][v - 2][4] > oc + 2) {
									map[u][v - 2][4] = oc + 2;
									move.push(make_pair(4, make_pair(u, v - 2)));
								}
							}
						}
						if (map[u][v - 1][1] > oc + 3) {
							map[u][v - 1][1] = oc + 3;
							move.push(make_pair(1, make_pair(u, v - 1)));
						}
						if (map[u][v - 1][2] > oc + 1) {
							map[u][v - 1][2] = oc + 1;
							move.push(make_pair(2, make_pair(u, v - 1)));
						}
						if (map[u][v - 1][3] > oc + 2) {
							map[u][v - 1][3] = oc + 2;
							move.push(make_pair(3, make_pair(u, v - 1)));
						}
						if (map[u][v - 1][4] > oc + 2) {
							map[u][v - 1][4] = oc + 2;
							move.push(make_pair(4, make_pair(u, v - 1)));
						}
					}
				}
			}
			else if (dir == 3) { // go south
				if (u < m - 1) {
					if (map[u + 1][v][0] == 0) {
						if (u < m - 2) {
							if (map[u + 2][v][0] == 0) {
								if (u < m - 3) {
									if (map[u + 3][v][0] == 0) {
										if (map[u + 3][v][1] > oc + 2) {
											map[u + 3][v][1] = oc + 2;
											move.push(make_pair(1, make_pair(u + 3, v)));
										}
										if (map[u + 3][v][2] > oc + 2) {
											map[u + 3][v][2] = oc + 2;
											move.push(make_pair(2, make_pair(u + 3, v)));
										}
										if (map[u + 3][v][3] > oc + 1) {
											map[u + 3][v][3] = oc + 1;
											move.push(make_pair(3, make_pair(u + 3, v)));
										}
										if (map[u + 3][v][4] > oc + 3) {
											map[u + 3][v][4] = oc + 3;
											move.push(make_pair(4, make_pair(u + 3, v)));
										}
									}
								}
								if (map[u + 2][v][1] > oc + 2) {
									map[u + 2][v][1] = oc + 2;
									move.push(make_pair(1, make_pair(u + 2, v)));
								}
								if (map[u + 2][v][2] > oc + 2) {
									map[u + 2][v][2] = oc + 2;
									move.push(make_pair(2, make_pair(u + 2, v)));
								}
								if (map[u + 2][v][3] > oc + 1) {
									map[u + 2][v][3] = oc + 1;
									move.push(make_pair(3, make_pair(u + 2, v)));
								}
								if (map[u + 2][v][4] > oc + 3) {
									map[u + 2][v][4] = oc + 3;
									move.push(make_pair(4, make_pair(u + 2, v)));
								}
							}
						}
						if (map[u + 1][v][1] > oc + 2) {
							map[u + 1][v][1] = oc + 2;
							move.push(make_pair(1, make_pair(u + 1, v)));
						}
						if (map[u + 1][v][2] > oc + 2) {
							map[u + 1][v][2] = oc + 2;
							move.push(make_pair(2, make_pair(u + 1, v)));
						}
						if (map[u + 1][v][3] > oc + 1) {
							map[u + 1][v][3] = oc + 1;
							move.push(make_pair(3, make_pair(u + 1, v)));
						}
						if (map[u + 1][v][4] > oc + 3) {
							map[u + 1][v][4] = oc + 3;
							move.push(make_pair(4, make_pair(u + 1, v)));
						}
					}
				}
			}
			else if (dir == 4) { // go north
				if (u > 0) {
					if (map[u - 1][v][0] == 0) {
						if (u > 1) {
							if (map[u - 2][v][0] == 0) {
								if (u > 2) {
									if (map[u - 3][v][0] == 0) {
										if (map[u - 3][v][1] > oc + 2) {
											map[u - 3][v][1] = oc + 2;
											move.push(make_pair(1, make_pair(u - 3, v)));
										}
										if (map[u - 3][v][2] > oc + 2) {
											map[u - 3][v][2] = oc + 2;
											move.push(make_pair(2, make_pair(u - 3, v)));
										}
										if (map[u - 3][v][3] > oc + 3) {
											map[u - 3][v][3] = oc + 3;
											move.push(make_pair(3, make_pair(u - 3, v)));
										}
										if (map[u - 3][v][4] > oc + 1) {
											map[u - 3][v][4] = oc + 1;
											move.push(make_pair(4, make_pair(u - 3, v)));
										}
									}
								}
								if (map[u - 2][v][1] > oc + 2) {
									map[u - 2][v][1] = oc + 2;
									move.push(make_pair(1, make_pair(u - 2, v)));
								}
								if (map[u - 2][v][2] > oc + 2) {
									map[u - 2][v][2] = oc + 2;
									move.push(make_pair(2, make_pair(u - 2, v)));
								}
								if (map[u - 2][v][3] > oc + 3) {
									map[u - 2][v][3] = oc + 3;
									move.push(make_pair(3, make_pair(u - 2, v)));
								}
								if (map[u - 2][v][4] > oc + 1) {
									map[u - 2][v][4] = oc + 1;
									move.push(make_pair(4, make_pair(u - 2, v)));
								}
							}
						}
						if (map[u - 1][v][1] > oc + 2) {
							map[u - 1][v][1] = oc + 2;
							move.push(make_pair(1, make_pair(u - 1, v)));
						}
						if (map[u - 1][v][2] > oc + 2) {
							map[u - 1][v][2] = oc + 2;
							move.push(make_pair(2, make_pair(u - 1, v)));
						}
						if (map[u - 1][v][3] > oc + 3) {
							map[u - 1][v][3] = oc + 3;
							move.push(make_pair(3, make_pair(u - 1, v)));
						}
						if (map[u - 1][v][4] > oc + 1) {
							map[u - 1][v][4] = oc + 1;
							move.push(make_pair(4, make_pair(u - 1, v)));
						}
					}
				}
			}
		}
	}
	cout << map[fu][fv][fd];
}