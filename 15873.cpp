#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int x, y;
	x = cin.get();
	y = cin.get();
	//0=>48 / 1=>49
	if (x == 49) {
		if (y == 48) {
			x = cin.get();
			if (x == 49) {
				y = cin.get();
				if (y == 48) {
					cout << 20;
				}
				else {
					cout << x - 38;
				}
			}
			else {
				cout << x - 38;
			}
		}
		else if (y == 49) {
			y = cin.get();
			if (y == 48) {
				cout << x - 38;
			}
			else {
				cout << 2;
			}
		}
		else {
			cout << x + y - 96;
		}
	}
	else {
		if (y == 49) {
			int z;
			z = cin.get();
			if (z == 48) {
				cout << x - 38;
			}
			else {
				cout << x + y - 96;
			}
		}
		else {
			cout << x + y - 96;
		}
	}
}