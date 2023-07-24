#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int w, h, p, q, t, ansx, ansy;
	cin >> w >> h >> p >> q >> t;
	if (p + t <= w) {
		ansx = p + t;
	}
	else if (t <= w + (w - p)) {
		ansx = w - (t - (w - p));
	}
	else {
		ansx = (t - (w + (w - p))) % (w * 2);
		if (ansx >= w) {
			ansx = w * 2 - ansx;
		}
	}
	if (q + t <= h) {
		ansy = q + t;
	}
	else if (t <= h + (h - q)) {
		ansy = h - (t - (h - q));
	}
	else {
		ansy = (t - (h + (h - q))) % (h * 2);
		if (ansy >= h) {
			ansy = h * 2 - ansy;
		}
	}
	cout << ansx << " " << ansy;
}