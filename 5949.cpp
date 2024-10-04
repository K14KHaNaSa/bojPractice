#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	if (n >= 1000000000) {
		cout << n / 1000000000 << ',';
	}
	if (n >= 1000000) {
		if (n >= 100000000 && (n % 1000000000) / 100000000 == 0)
			cout << 0;
		if (n >= 10000000 && (n % 1000000000) / 10000000 == 0)
			cout << 0;
		cout << (n % 1000000000) / 1000000 << ',';
	}
	if (n >= 1000) {
		if (n >= 100000 && (n % 1000000) / 100000 == 0)
			cout << 0;
		if (n >= 10000 && (n % 1000000) / 10000 == 0)
			cout << 0;
		cout << (n % 1000000) / 1000 << ',';
	}
	if (n >= 100)
		cout << (n % 1000) / 100;
	if (n >= 10)
		cout << (n % 100) / 10;
	cout << n % 10;
}