#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	double h, m;
	cin >> h >> m;
	while (h >= 30) {
		h -= 30;
	}
	if (h == (m / 12)) {
		cout << "O";
	}
	else {
		cout << "X";
	}
}