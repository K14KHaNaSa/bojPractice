#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, k, x, y, mx, mn;
	cin >> t;
	while (t--) {
		cin >> k >> x >> y;
		mx = max(x, y);
		mn = min(x, y);
		cout << max(k, mn + 2) - mx << '\n';
	}
}