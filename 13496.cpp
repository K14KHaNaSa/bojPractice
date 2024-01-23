#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, s, d, di, vi;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cin >> n >> s >> d;
		int ans = 0;
		while (n--) {
			cin >> di >> vi;
			if (di <= s * d)
				ans += vi;
		}
		cout << "Data Set " << i << ":\n" << ans << "\n\n";
	}
}