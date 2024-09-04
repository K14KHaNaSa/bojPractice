#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, x, ans;
	int d[10];
	cin >> t;
	while (t--) {
		for (int i = 0; i < 10; i++)
			d[i] = 0;
		cin >> x;
		while (x > 0) {
			d[x % 10]++;
			x /= 10;
		}
		ans = 0;
		for (int i = 0; i < 10; i++) {
			if (d[i] > 0)
				ans++;
		}
		cout << ans << '\n';
	}
}