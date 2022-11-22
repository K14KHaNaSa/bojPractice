#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	unsigned long long int x, t;
	cin >> x >> t;
	if (x % 8 == 0 && x / 8 <= t) {
		cout << 1 << "\n" << t - x / 8 << " " << 8;
	}
	else if (x % 4 == 0 && x / 4 <= t) {
		cout << 1 << "\n" << t - x / 4 << " " << 4;
	}
	else if (x <= t) {
		cout << 1 << "\n" << t - x << " " << 1;
	}
	else if ((x / 8) > 0 && ((x % 8) / 4) > 0 && ((x % 8) % 4) == 0 && (x / 8) + ((x % 8) / 4) <= t) {
		cout << 2 << "\n"
			<< t - ((x / 8) + ((x % 8) / 4) + ((x % 8) % 4)) << " " << 8 << "\n"
			<< t - ((x % 8) / 4) + ((x % 8) % 4) << " " << 4;
	}
	else if ((x / 8) > 0 && (x / 8) + (x % 8) <= t) {
		cout << 2 << "\n"
			<< t - ((x / 8) + (x % 8)) << " " << 8 << "\n"
			<< t - (x % 8) << " " << 1;
	}
	else if ((x / 4) > 0 && (x / 4) + (x % 4) <= t) {
		cout << 2 << "\n"
			<< t - ((x / 4) + (x % 4)) << " " << 4 <<
			"\n" << t - (x % 4) << " " << 1;
	}
	else if ((x / 8) + ((x % 8) / 4) + ((x % 8) % 4) <= t) {
		cout << 3 << "\n"
			<< t - ((x / 8) + ((x % 8) / 4) + ((x % 8) % 4)) << " " << 8 << "\n"
			<< t - (((x % 8) / 4) + ((x % 8) % 4)) << " " << 4 << "\n"
			<< t - ((x % 8) % 4) << " " << 1;
	}
	else {
		cout << -1;
	}
}