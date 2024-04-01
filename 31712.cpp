#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int cu, du, cd, dd, cp, dp, h, u, d, p;
	cin >> cu >> du >> cd >> dd >> cp >> dp >> h;
	u = cu;
	d = cd;
	p = cp;
	int ans = 0;
	h -= (du + dd + dp);
	while (h > 0) {
		u--;
		d--;
		p--;
		if (u == 0) {
			u = cu;
			h -= du;
		}
		if (d == 0) {
			d = cd;
			h -= dd;
		}
		if (p == 0) {
			p = cp;
			h -= dp;
		}
		ans++;
	}
	cout << ans;
}