#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, a, b, ans;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		ans = 0;
		if (b > a * 4) {
			while (b > a * 4) {
				a++;
				ans++;
			}
		}
		if (b < a * 3)
			ans += a * 3 - b;
		cout << ans << "\n";
	}
}