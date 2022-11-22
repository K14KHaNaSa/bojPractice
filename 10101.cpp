#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int x, y, z;
	cin >> x >> y >> z;
	if (x + y + z == 180) {
		if (x == y) {
			if (y == z) {
				cout << "Equilateral";
			}
			else {
				cout << "Isosceles";
			}
		}
		else if (y == z || x == z) {
			cout << "Isosceles";
		}
		else {
			cout << "Scalene";
		}
	}
	else {
		cout << "Error";
	}
}