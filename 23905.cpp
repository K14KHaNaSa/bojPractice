#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, k, a, ans, cd;
	cin >> t;
	for (int c = 1; c <= t; c++) {
		cin >> n >> k;
		ans = 0;
		cd = k;
		while (n--) {
			cin >> a;
			if (a == cd) {
				cd--;
				if (cd == 0) {
					ans++;
					cd = k;
				}
			}
			else if (a == k)
				cd = k - 1;
			else
				cd = k;
		}
		cout << "Case #" << c << ": " << ans << '\n';
	}
}