#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, h, m, i;
	cin >> t;
	for (i = 1; i <= t; i++) {
		cin >> h >> m;
		m = (h * 60) + m - 45;
		if (m < 0)
			m += 24 * 60;
		cout << "Case #" << i << ": " << m / 60 << ' ' << m % 60 << '\n';
	}
}