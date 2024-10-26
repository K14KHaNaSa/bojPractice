#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int pfx_sum[101];
	pfx_sum[0] = 0;
	int n, k, t;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> t;
		pfx_sum[i + 1] = pfx_sum[i] + t;
	}
	int ans = -2147483647;
	for (int i = 0; i <= n - k; i++)
		ans = max(ans, pfx_sum[i + k] - pfx_sum[i]);
	cout << ans;
}