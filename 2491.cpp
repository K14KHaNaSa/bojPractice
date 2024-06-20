#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, pre, a;
	cin >> n;
	int inc = 1;
	int dec = 1;
	int ans = 1;
	cin >> pre;
	n--;
	while (n--) {
		cin >> a;
		if (a >= pre)
			inc++;
		else
			inc = 1;
		if (a <= pre)
			dec++;
		else
			dec = 1;
		ans = max(ans, max(inc, dec));
		pre = a;
	}
	cout << ans;
}