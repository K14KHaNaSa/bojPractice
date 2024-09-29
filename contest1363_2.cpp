#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int x, y, a, b;
	cin >> a >> b >> x >> y;
	if (a == 0) {
		if (x != 0) {
			cout << 1;
			return 0;
		}
		else if (b < y) {
			cout << 1;
			return 0;
		}
		else {
			cout << 3;
			return 0;
		}
	}
	if (b == 0) {
		if (y != 0) {
			cout << 1;
			return 0;
		}
		else if (a < x) {
			cout << 1;
			return 0;
		}
		else {
			cout << 3;
			return 0;
		}
	}
	cout << 2;
}