#include <iostream>
using namespace std;

int a[100000];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long int n, k, mn, mx, ans;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	ans = 0;
	for (int i = 0; i < n / 2; i++) {
		mx = max(a[i], a[n - 1 - i]);
		mn = min(a[i], a[n - 1 - i]);
		if (mx == mn)	continue;
		ans += (mx - mn) / k;
		ans += min((mx - mn) % k, k + 1 - (mx - mn) % k);
	}
	cout << ans;
}