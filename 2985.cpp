#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int x, y, z;
	cin >> x >> y >> z;
	if (x + y == z) {
		cout << x << "+" << y << "=" << z;
	}
	else if (x - y == z) {
		cout << x << "-" << y << "=" << z;
	}
	else if (x * y == z) {
		cout << x << "*" << y << "=" << z;
	}
	else if (x / y == z) {
		cout << x << "/" << y << "=" << z;
	}
	else if (y + z == x) {
		cout << x << "=" << y << "+" << z;
	}
	else if (y - z == x) {
		cout << x << "=" << y << "-" << z;
	}
	else if (y * z == x) {
		cout << x << "=" << y << "*" << z;
	}
	else if (y / z == x) {
		cout << x << "=" << y << "/" << z;
	}
}