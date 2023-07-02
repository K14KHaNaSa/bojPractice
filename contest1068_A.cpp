#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, t;
	n = 0;
	for (int i = 0; i < 10; i++) {
		cin >> t;
		n += t;
		n %= 4;
	}
	if (n == 0) {
		cout << "N";
	}
	else if (n == 1) {
		cout << "E";
	}
	else if (n == 2) {
		cout << "S";
	}
	else if (n == 3) {
		cout << "W";
	}
}