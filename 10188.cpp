#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, x, y, i, j;
	cin >> t;
	while (t--) {
		cin >> x >> y;
		for (i = 0; i < y; i++) {
			for (j = 0; j < x; j++)
				cout << 'X';
			cout << '\n';
		}
		cout << '\n';
	}
}