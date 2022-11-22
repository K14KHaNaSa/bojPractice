#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int x1, x2, x3, y1, y2, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	if (x1 != x2) {
		if (x2 == x3) {
			cout << x1 << " ";
		}
		else {
			cout << x2 << " ";
		}
	}
	else {
		cout << x3 << " ";
	}
	if (y1 != y2) {
		if (y2 == y3) {
			cout << y1;
		}
		else {
			cout << y2;
		}
	}
	else {
		cout << y3;
	}
}