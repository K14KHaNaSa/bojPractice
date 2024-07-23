#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, seed, c, m, x1, x2;
	cin >> m >> seed >> x1 >> x2;
	for (a = 0; a < m; a++) {
		for (c = 0; c < m; c++) {
			if ((a * seed + c) % m == x1 && (a * x1 + c) % m == x2) {
				cout << a << ' ' << c;
				return 0;
			}
		}
	}
}