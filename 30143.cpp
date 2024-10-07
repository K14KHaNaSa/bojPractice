#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, a, d;
	cin >> t;
	while (t--) {
		cin >> n >> a >> d;
		int ans = a;
		for (int i = 2; i <= n; i++)
			ans += a + (i - 1) * d;
		cout << ans << '\n';
	}
}