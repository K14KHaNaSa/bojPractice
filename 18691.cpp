#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, g, c, e;
	cin >> t;
	while (t--) {
		cin >> g >> c >> e;
		int ans = 0;
		while (c < e) {
			ans++;
			if (g == 1)
				c++;
			else if (g == 2 && ans % 3 == 0)
				c++;
			else if (g == 3 && ans % 5 == 0)
				c++;
		}
		cout << ans << '\n';
	}
}