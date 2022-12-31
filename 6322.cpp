#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void imp(int tc) {
	cout << "Triangle #" << tc << "\nImpossible.\n\n";
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b, c;
	cin >> a >> b >> c;
	cout << setiosflags(ios::fixed) << setprecision(3);
	int tc = 1;
	while (a != 0 && b != 0 && c != 0) {
		if (a == -1) {
			if (b >= c) {
				imp(tc);
			}
			else {
				cout << "Triangle #" << tc << "\na = " << sqrt(pow(c, 2) - pow(b, 2)) << "\n\n";
			}
		}
		else if (b == -1) {
			if (a >= c) {
				imp(tc);
			}
			else {
				cout << "Triangle #" << tc << "\nb = " << sqrt(pow(c, 2) - pow(a, 2)) << "\n\n";
			}
		}
		else {
			cout << "Triangle #" << tc << "\nc = " << sqrt(pow(a, 2) + pow(b, 2)) << "\n\n";
		}
		cin >> a >> b >> c;
		tc++;
	}
}