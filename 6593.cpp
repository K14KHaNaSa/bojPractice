#include <iostream>
#include <queue>
#include <algorithm>
#include <tuple>
using namespace std;

int step[30][30][30];
int l, r, c;
int sl, sr, sc, el, er, ec;
queue<tuple<int, int, int>> moving;

void escape(int sl, int sr, int sc) {
	moving.push(tuple<int, int, int>(sl, sr, sc));
	step[sl][sr][sc] = 0;
	while (!moving.empty()) {
		int x = get<0>(moving.front());
		int y = get<1>(moving.front());
		int z = get<2>(moving.front());
		moving.pop();
		if (x < l - 1) {
			if (step[x + 1][y][z] == 0 && !(x + 1 == sl && y == sr && y == sc)) {
				moving.push(tuple<int, int, int>(x + 1, y, z));
				step[x + 1][y][z] = step[x][y][z] + 1;
			}
		}
		if (y < r - 1) {
			if (step[x][y + 1][z] == 0 && !(x == sl && y+ 1 == sr && z == sc)) {
				moving.push(tuple<int, int, int>(x, y + 1, z));
				step[x][y + 1][z] = step[x][y][z] + 1;
			}
		}
		if (x > 0) {
			if (step[x - 1][y][z] == 0 && !(x - 1 == sl && y == sr && z == sc)) {
				moving.push(tuple<int, int, int>(x - 1, y, z));
				step[x - 1][y][z] = step[x][y][z] + 1;
			}
		}
		if (y > 0) {
			if (step[x][y - 1][z] == 0 && !(x == sl && y - 1 == sr && z == sc)) {
				moving.push(tuple<int, int, int>(x, y - 1, z));
				step[x][y - 1][z] = step[x][y][z] + 1;
			}
		}
		if (z > 0) {
			if (step[x][y][z - 1] == 0 && !(x == sl && y == sr && z - 1 == sc)) {
				moving.push(tuple<int, int, int>(x, y, z - 1));
				step[x][y][z - 1] = step[x][y][z] + 1;
			}
		}
		if (z < c - 1) {
			if (step[x][y][z + 1] == 0 && !(x == sl && y == sr && z + 1 == sc)) {
				moving.push(tuple<int, int, int>(x, y, z + 1));
				step[x][y][z + 1] = step[x][y][z] + 1;
			}
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	char areatype;
	cin >> l >> r >> c;
	while (l != 0 && r != 0 && c != 0) {
		for (int i = 0; i < l; i++) {
			for (int j = 0; j < r; j++) {
				for (int k = 0; k < c; k++) {
					cin >> areatype;
					if (areatype == 'S') {
						sl = i;
						sr = j;
						sc = k;
						step[i][j][k] = 0;
					}
					else if (areatype == 'E') {
						el = i;
						er = j;
						ec = k;
						step[i][j][k] = 0;
					}
					else if (areatype == '.') {
						step[i][j][k] = 0;
					}
					else if (areatype == '#') {
						step[i][j][k] = -1;
					}
				}
			}
		}
		escape(sl, sr, sc);
		if (step[el][er][ec] != 0) {
			cout << "Escaped in "<<step[el][er][ec] << " minute(s).\n";
		}
		else {
			cout << "Trapped!\n";
		}
		cin >> l >> r >> c;
	}	
}