#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int y, m, c_y, c_m;
	cin >> y >> m;
	if (y < 1) {
		c_m = m * 15;
		c_y = c_m / 12;
		c_m %= 12;
	}
	else if (y < 2) {
		c_y = 15;
		c_m = m * 9;
		c_y += c_m / 12;
		c_m %= 12;
	}
	else {
		c_y = 24 + max(0, y - 2) * 4;
		c_m = m * 4;
		c_y += c_m / 12;
		c_m %= 12;
	}
	cout << c_y << ' ' << c_m;
}