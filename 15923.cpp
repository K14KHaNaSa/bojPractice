#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, x0, y0, xp, yp, x, y;
	int ans = 0;
	cin >> n >> x0 >> y0;
	xp = x0;
	yp = y0;
	for (int i = 1; i < n; i++) {
		cin >> x >> y;
		ans += max(x - xp, xp - x);
		ans += max(y - yp, yp - y);
		xp = x;
		yp = y;
	}
	cout << ans + max(x - x0, x0 - x) + max(y - y0, y0 - y);
}