#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	n %= 100;
	if (n == 0 || n == 10 || n == 30 || n == 60) {
		cout << 0;
	}
	else if (n > 75 && n < 85) {
		cout << 4;
	}
	else if ((n > 70 && n < 90) || (n > 40 && n < 50)) {
		cout << 3;
	}
	else if ((n > 65 && n < 95) || (n > 35 && n < 55) || (n > 15 && n < 25)) {
		cout << 2;
	}
	else {
		cout << 1;
	}
}