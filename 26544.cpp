#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long int t, x, h, ans, pre;
	cin >> t;
	while (t--) {
		cin >> x;
		ans = 0;
		for (int i = 0; i < x; i++) {
			cin >> h;
			ans += h * 2;
		}
		pre = 0;
		for (int i = 0; i < x; i++) {
			cin >> h;
			ans += max(pre - h, h - pre);
			pre = h;
		}
		ans += pre;
		cout << ans << '\n';
	}
}