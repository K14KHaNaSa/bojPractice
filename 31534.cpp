#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	double a, b, h, i, s, l;
	cin >> a >> b >> h;
	if (a == b) {
		cout << -1;
		return 0;
	}
	if (a < b) {
		i = a * h / (b - a);
		s = a * a + i * i;
		l = (i + h) * (i + h) + b * b;
	}
	else {
		i = b * h / (a - b);
		s = b * b + i * i;
		l = (i + h) * (i + h) + a * a;
	}
	cout << fixed << setprecision(7) << (l - s) * 3.14159265359;
}