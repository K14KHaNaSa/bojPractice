#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	unsigned int a, b, c, x, y, z;
	cin >> a >> b >> c >> x >> y >> z;
	unsigned int thankyou = 0;
	unsigned int chicken, pizza, burger; //temp
	thankyou = min(a, x) + min(b, y) + min(c, z);
	chicken = 0;
	pizza = 0;
	burger = 0;
	if (a < x) {
		x -= a;
		a = 0;
		pizza = x / 3;
		x %= 3;
	}
	if (a >= x) {
		a -= x;
		x = 0;
	}
	if (b < y) {
		y -= b;
		b = 0;
		burger = y / 3;
		y %= 3;
	}
	if (b >= y) {
		b -= y;
		y = 0;
	}
	if (c < z) {
		z -= c;
		c = 0;
		chicken = z / 3;
		z %= 3;
	}
	if (c >= z) {
		c -= z;
		z = 0;
	}
	x += chicken;
	y += pizza;
	z += burger;
	thankyou += min(a, x) + min(b, y) + min(c, z);
	chicken = 0;
	pizza = 0;
	burger = 0;
	if (a < x) {
		x -= a;
		a = 0;
		pizza = x / 3;
		z %= 3;
	}
	if (a >= x) {
		a -= x;
		x = 0;
	}
	if (b < y) {
		y -= b;
		b = 0;
		burger = y / 3;
		y %= 3;
	}
	if (b >= y) {
		b -= y;
		y = 0;
	}
	if (c < z) {
		z -= c;
		c = 0;
		chicken = z / 3;
		z %= 3;
	}
	if (c >= z) {
		c -= z;
		z = 0;
	}
	x += chicken;
	y += pizza;
	z += burger;
	thankyou += min(a, x) + min(b, y) + min(c, z);
	cout << thankyou;
}