#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int q[100][100][100];
	int r, c, h, i, j, k, x, y, z;
	char ch;
	cin >> r >> c >> h;
	for (k = 0; k < h; k++) {
		for (i = 0; i < r; i++) {
			for (j = 0; j < c; j++) {
				q[i][j][k] = 0;
			}
		}
	}
	for (k = 0; k < h; k++) {
		for (i = 0; i < r; i++) {
			ch = cin.get(); // \n
			for (j = 0; j < c; j++) {
				ch = cin.get();
				if (ch == '*') {
					for (z = max(0, k - 1); z < min(h, k + 2); z++) {
						for (x = max(0, i - 1); x < min(r, i + 2); x++) {
							for (y = max(0, j - 1); y < min(c, j + 2); y++)
								q[x][y][z]++;
						}
					}
					q[i][j][k] = 10000001; // it's == *
				}
			}
		}
	}
	for (k = 0; k < h; k++) {
		for (i = 0; i < r; i++) {
			for (j = 0; j < c; j++)
				q[i][j][k] > 10000000 ? cout << '*' : cout << q[i][j][k] % 10;
			cout << '\n';
		}
	}
}