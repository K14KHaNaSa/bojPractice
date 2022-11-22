#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	double a, b, c, x1, x2, y1, y2;
	cin >> a >> b >> c >> x1 >> x2 >> y1 >> y2;

	if (((x1 * a * -1) - c) / b > y1 && ((x1 * a * -1) - c) / b < y2) {
		cout << "Poor";
	}
	else if (((x2 * a * -1) - c) / b > y1 && ((x2 * a * -1) - c) / b < y2) {
		cout << "Poor";
	}
	else if (((y1 * b * -1) - c) / a > x1 && ((y1 * b * -1) - c) / a < x2) {
		cout << "Poor";
	}
	else if (((y2 * b * -1) - c) / a > x1 && ((y2 * b * -1) - c) / a < x2) {
		cout << "Poor";
	}
	else {
		cout << "Lucky";
	}
}