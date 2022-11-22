#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	unsigned long long int a, b, c, d, btemp, dtemp;
	cin >> a >> b >> c >> d;
	int bx = 0;
	int dx = 0;
	btemp = b;
	dtemp = d;
	while (btemp > 0) {
		btemp /= 10;
		bx++;
	}
	while (dtemp > 0) {
		dtemp /= 10;
		dx++;
	}
	while (bx > 0) {
		a *= 10;
		bx--;
	}
	while (dx > 0) {
		c *= 10;
		dx--;
	}
	a += b;
	c += d;
	cout << a + c;
}