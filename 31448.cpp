#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, pre, a;
	cin >> n;
	cin >> pre;
	n--;
	int ans = 0;
	int elev = 0;
	while (n--) {
		cin >> a;
		if (pre < a)
			elev += a - pre;
		else {
			ans = max(ans, elev);
			elev = 0;
		}
		pre = a;
	}
	ans = max(ans, elev);
	cout << ans;
}