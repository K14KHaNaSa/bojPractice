#include <iostream>
using namespace std;

int n, s, c, l;
int ans = 0;
int bs = 0;
int bc = 0;
int bl = 0;

int best(int nn, int ns, int nc, int nl) {
	bs = ns;
	bc = nc;
	bl = nl;
	return nn;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> s >> c >> l;
		if (bs < s)
			ans = best(i, s, c, l);
		else if (bs == s) {
			if (bc > c)
				ans = best(i, s, c, l);
			else if (bc == c) {
				if (l < bl)
					ans = best(i, s, c, l);
			}
		}
	}
	cout << ans;
}