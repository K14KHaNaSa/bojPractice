#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a[100002];
	int n, l, r;
	int mx = 0;
	int mn = 1000000001;
	int ans = 1;
	cin >> n >> l >> r;
	a[0] = 0;
	a[n + 1] = 1000000000;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (i >= l && i <= r) {
			mx = max(mx, a[i]);
			mn = min(mn, a[i]);
		}
	}
	a[l] = mn;
	a[r] = mx;
	for (int i = 0; i < l ; i++) {
		if (a[i] > a[i + 1])
			ans = 0;
	}
	for (int i = r; i < n; i++) {
		if (a[i] > a[i + 1])
			ans = 0;
	}
	cout << ans;
}