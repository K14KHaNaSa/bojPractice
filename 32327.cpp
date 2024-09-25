#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int d, y;
	cin >> d;
	while (cin >> y) {
		if (d > y)
			d += y;
		else {
			cout << d;
			break;
		}
	}
}