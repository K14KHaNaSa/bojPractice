#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	double a, b, h;
	cin >> a >> b >> h;
	double i = a * h / (b - a);
	double s = a * a + i * i;
	double l = (i + h) * (i + h) + b * b;
	if (a < b)
		cout << fixed << setprecision(7) << (l - s) * 3.14159265359;
	else
		cout << -1;
}