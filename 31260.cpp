#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long int x, y, d, l, s;
	cin >> x >> y >> d;
	y += x * 100;
	s = (y - (2 * d)) / 4;
	l = s + d;
	cout << l / 100 << ' ' << l % 100 << '\n' << s / 100 << ' ' << s % 100;
}