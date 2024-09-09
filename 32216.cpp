#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k, t, d;
	cin >> n >> k >> t;
	int ans = 0;
	while (n--) {
		cin >> d;
		if (t < k)
			t += d + max(t - k, k - t);
		else
			t += d - max(t - k, k - t);
		ans += max(t - k, k - t);
	}
	cout << ans;
}