#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long int t, x, y;
	cin >> t;
	while (t--) {
		cin >> x >> y;
		long int sq = sqrt(y - x - 1);
		if (sq * sq + sq < y - x) {
			cout << sq * 2 + 1 << "\n";
		}
		else {
			cout << sq * 2 << "\n";
		}
	}
}