#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, a, b, money;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		if (a == 0) {
			money = 0;
		}
		else if (a < 2) {
			money = 5000000;
		}
		else if (a < 4) {
			money = 3000000;
		}
		else if (a < 7) {
			money = 2000000;
		}
		else if (a < 11) {
			money = 500000;
		}
		else if (a < 16) {
			money = 300000;
		}
		else if (a < 22) {
			money = 100000;
		}
		else {
			money = 0;
		}
		if (b == 0) {
			money += 0;
		}
		else if (b < 2) {
			money += 5120000;
		}
		else if (b < 4) {
			money += 2560000;
		}
		else if (b < 8) {
			money += 1280000;
		}
		else if (b < 16) {
			money += 640000;
		}
		else if (b < 32) {
			money += 320000;
		}
		cout << money << "\n";
	}
}