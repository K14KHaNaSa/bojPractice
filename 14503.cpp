#include <iostream>
using namespace std;

int n, m;
int map[50][50]; // 0 = empty / 1 = wall / 2 = cleaned;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	int r, c, d; // d = 0 north / 1 east / 2 south / 3 west
	cin >> r >> c >> d;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
		}
	}
	bool act = true;
	while (act) {
		if (map[r][c] == 0) {
			map[r][c] = 2; // clean (act no.1)
		}
		if (map[r - 1][c] > 0 && map[r + 1][c] > 0 && map[r][c - 1] > 0 && map[r][c + 1] > 0) {
			// input rule -> all side block is 1.
			// (act no.2) (if {act 2-1} else {act 2-2}
			if (d == 0) {
				if (map[r + 1][c] != 1) {
					r++;
				}
				else if (map[r + 1][c] == 1) {
					act = false;
				}
			}
			if (d == 1) {
				if (map[r][c - 1] != 1) {
					c--;
				}
				else if (map[r][c - 1] == 1) {
					act = false;
				}
			}
			if (d == 2) {
				if (map[r - 1][c] != 1) {
					r--;
				}
				else if (map[r - 1][c] == 1) {
					act = false;
				}
			}
			if (d == 3) {
				if (map[r][c + 1] != 1) {
					c++;
				}
				else if (map[r][c + 1] == 1) {
					act = false;
				}
			}
		}
		else { // act no.3
			bool go = false;
			while (!go) {
				if (!go) {
					d--; //turn
					if (d < 0) {
						d = 3;
					}
				}
				if (d == 0) {
					if (map[r - 1][c] < 1) {
						r--;
						go = true;
					}
				}
				else if (d == 1) {
					if (map[r][c + 1] < 1) {
						c++;
						go = true;
					}
				}
				else if (d == 2) {
					if (map[r + 1][c] < 1) {
						r++;
						go = true;
					}
				}
				else if (d == 3) {
					if (map[r][c - 1] < 1) {
						c--;
						go = true;
					}
				}
			}
		}
	}
	int answer = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (map[i][j] > 1) {
				answer++;
			}
		}
	}
	cout << answer;
}