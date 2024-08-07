#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	bool yoon;
	int d, m, y;
	cin >> d >> m >> y;
	while (d != 0 && m != 0 && y != 0) {
		yoon = false;
		if (y % 4 == 0)
			yoon = true;
		if (y % 100 == 0)
			yoon = false;
		if (y % 400 == 0)
			yoon = true;
		int ans = 0;
		for (int p = 1; p < m; p++) {
			if (p < 8) {
				if (p % 2 == 1)
					ans += 31;
				else if (p == 2)
					yoon ? ans += 29 : ans += 28;
				else
					ans += 30;
			}
			else {
				if (p % 2 == 1)
					ans += 30;
				else
					ans += 31;
			}
		}
		cout << ans + d << '\n';
		cin >> d >> m >> y;
	}
}