#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, a, b;
	int ans = 0;
	cin >> n;
	while (n--) {
		cin >> a >> b;
		if (ans % (a + b) < b)
			ans += (b - ans % (a + b));
		ans++;
	}
	cout << ans;
}