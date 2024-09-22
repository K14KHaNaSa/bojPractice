#include <iostream>
using namespace std;

long long int ym[100000][4]; // min_r , min_c, max_r, max_c

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long int r, c, a, v, h, n, i, j, ans_ym, ans_size, sz;
	cin >> r >> c >> n;
	for (i = 0; i < n; i++) {
		for (j = 0; j < 4; j++) {
			ym[i][j] = 0;
		}
	}
	for (i = 0; i < n; i++) {
		cin >> a >> v >> h;
		// r
		if (ym[a - 1][0] == 0)
			ym[a - 1][0] = v;
		else
			ym[a - 1][0] = min(ym[a - 1][0], v);

		if (ym[a - 1][2] == 0)
			ym[a - 1][2] = v;
		else
			ym[a - 1][2] = max(ym[a - 1][2], v);
		//c
		if (ym[a - 1][1] == 0)
			ym[a - 1][1] = h;
		else
			ym[a - 1][1] = min(ym[a - 1][1], h);

		if (ym[a - 1][3] == 0)
			ym[a - 1][3] = h;
		else
			ym[a - 1][3] = max(ym[a - 1][3], h);
	}
	ans_ym = 0;
	ans_size = 0;
	for (i = 0; i < n; i++) {
		if (ym[i][0] == 0) continue; // that is not exist
		r = ym[i][2] - ym[i][0] + 1;
		c = ym[i][3] - ym[i][1] + 1;
		sz = r * c;
		if (sz > ans_size) {
			ans_ym = i + 1;
			ans_size = sz;
		}
	}
	cout << ans_ym << ' ' << ans_size;
}