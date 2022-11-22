#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, p;
	cin >> n >> p;
	if (n < 5) {
		cout << p;
	}
	else if (n < 10) {
		if (p <= 500) {
			cout << 0;
		}
		else {
			cout << p - 500;
		}
	}
	else if (n < 15) {
		if (p - 500 < (p / 10) * 9) {
			if (p <= 500) {
				cout << 0;
			}
			else {
				cout << p - 500;
			}
		}
		else {
			cout << (p / 10) * 9;
		}
	}
	else if (n < 20) {
		if (p - 2000 < (p / 10) * 9) {
			if (p <= 2000) {
				cout << 0;
			}
			else {
				cout << p - 2000;
			}
		}
		else {
			cout << (p / 10) * 9;
		}
	}
	else if (n >= 20) {
		if (p - 2000 < (p / 4) * 3) {
			if (p <= 2000) {
				cout << 0;
			}
			else {
				cout << p - 2000;
			}
		}
		else {
			cout << (p / 4) * 3;
		}
	}
}