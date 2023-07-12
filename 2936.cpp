#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 250 * 250 = 62500 / 2 = 31250
	double x, y;
	cin >> x >> y;
	double ansx, ansy;
	if (x == 0 && y == 0) {
		ansx = 125;
		ansy = 125;
	}
	else if (x == 0) {
		if (y <= 125) {
			// (250-y) * ansx = 31250
			ansx = 31250 / (250 - y);
			ansy = 250 - ansx;
		}
		else {
			ansx = 31250 / y;
			ansy = 0;
			// y * ansx = 31250
		}
	}
	else if (y == 0) {
		if (x <= 125) {
			ansy = 31250 / (250 - x);
			ansx = 250 - ansy;
		}
		else {
			ansy = 31250 / x;
			ansx = 0;
		}
	}
	else {
		if (x == 125 && y == 125) {
			ansx = 0;
			ansy = 0;
		}
		else if (x < 125) {
			//y * (250-ansx) = 31250
			ansx = 250 - (31250 / y);
			ansy = 0;
		}
		else {
			ansy = 250 - (31250 / x);
			ansx = 0;
		}
	}
	cout << fixed << setprecision(2) << ansx << " " << ansy;
}