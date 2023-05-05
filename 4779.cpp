#include <iostream>
#include <cmath>
using namespace std;

void blk(int n, int l, int r) {
	if (n == 0) {
		cout << "-";
	}
	else {
		blk(n - 1, l, r / 3);
		for (int i = 0; i < r / 3; i++) {
			cout << " ";
		}
		blk(n - 1, l, r / 3);
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	while (cin >> t) {
		blk(t, 0, pow(3, t));
		cout << "\n";
	}
}