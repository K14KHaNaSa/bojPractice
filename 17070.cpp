#include <iostream>
using namespace std;

int map[16][16][4]; // map type, h , slash , v

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j][0];
			for (int k = 1; k < 4; k++) {
				map[i][j][k] = 0;
			}
		}
	}
	map[0][1][1] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j][0] == 0) {
				if (i > 0 && j > 0) {
					if (map[i - 1][j][0] == 0 && map[i][j - 1][0] == 0 && map[i - 1][j - 1][0] == 0) {
						map[i][j][2] += map[i - 1][j - 1][2] + map[i - 1][j - 1][1] + map[i - 1][j - 1][3];
					}
					if (map[i - 1][j][0] == 0) {
						map[i][j][3] += map[i - 1][j][2];
					}
					if (map[i][j - 1][0] == 0) {
						map[i][j][1] += map[i][j - 1][2];
					}
				}
				if (i > 0) {
					if (map[i - 1][j][0] == 0) {
						map[i][j][3] += map[i - 1][j][3];
					}
				}
				if (j > 0) {
					if (map[i][j - 1][0] == 0) {
						map[i][j][1] += map[i][j - 1][1];
					}
				}
			}
		}
	}
	cout << map[n - 1][n - 1][1] + map[n - 1][n - 1][2] + map[n - 1][n - 1][3];
}