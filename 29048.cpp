#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, p;
	cin >> n >> m >> p;
	// case 1 : ¤¿ p == 4n + 2m + x ( x >= 2 && x < m * 2 )
	// case 2 : ¤Ì p == 4m + 2n + x ( x >= 2 && x < n * 2 )
	// case 3 : || p == 4n + 2m or 2n + 4m
	if ((p == n * 4 + m * 2) || (p == m * 4 + n * 2)) {
		cout << "YES";
	}
	else if ((n > 1) && (p >= 4 * n + 2 * m + 2) && (p <= 4 * n + 4 * m - 2)) {
		cout << "YES";
	}
	else if ((m > 1) && (p >= 4 * m + 2 * n + 2) && (p <= 4 * m + 4 * n - 2)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}