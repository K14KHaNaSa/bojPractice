#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	int ans = 0;
	while (a < b) {
		if (a < 0) {
			ans += c;
			a++;
		}
		if (a == 0) {
			ans += d + e;
			a++;
		}
		if (a > 0) {
			ans += e;
			a++;
		}
	}
	cout << ans;
}