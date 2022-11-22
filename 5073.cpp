#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int x, y, z;
	bool fin = false;
	while (!fin) {
		cin >> x >> y >> z;
		if (x == y && y == z) {
			if (x == 0) {
				fin = true;
			}
			else {
				cout << "Equilateral\n";
			}
		}
		else if (x == y || y == z || x == z) {
			if (x + y <= z || x + z <= y || y + z <= x) {
				cout << "Invalid\n";
			}
			else {
				cout << "Isosceles\n";
			}
		}
		else if (x + y <= z || x + z <= y || y + z <= x) {
			cout << "Invalid\n";
		}
		else {
			cout << "Scalene\n";
		}
	}
}