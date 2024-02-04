#include <iostream>
using namespace std;

int h, w, r, c, d;
int a[64][64];
int b[64][64];
bool area[64][64]; // true = not cleaned
int r_u, r_v, r_d; //recent cleaned point and dir;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char s;
	cin >> h >> w >> r >> c >> d;
	for (int i = 0; i < h; i++) {
		s = cin.get();
		for (int j = 0; j < w; j++) {
			s = cin.get();
			a[i][j] = int(s - 48);
			area[i][j] = true;
		}
	}
	for (int i = 0; i < h; i++) {
		s = cin.get();
		for (int j = 0; j < w; j++) {
			s = cin.get();
			b[i][j] = int(s - 48);
		}
	}
	r_u = -1;
	r_v = -1;
	r_d = -1;
	int movecount = 0;
	int empty_move = 0;
	while (true) {
		if (area[r][c]) { //a
			area[r][c] = false;
			d = (a[r][c] + d) % 4;
			if (d == 0)
				r--;
			if (d == 1)
				c++;
			if (d == 2)
				r++;
			if (d == 3)
				c--;
			movecount += empty_move + 1;
			empty_move = 0;
			r_u = r;
			r_v = c;
			r_d = d;
		}
		else { //b
			d = (b[r][c] + d) % 4;
			empty_move++;
			if (d == 0)
				r--;
			if (d == 1)
				c++;
			if (d == 2)
				r++;
			if (d == 3)
				c--;
			if (r_u == r && r_v == c && r_d == d)
				break;
		}
		if (r < 0 || c < 0 || r >= h || c >= w)
			break;

	}
	cout << movecount;
}