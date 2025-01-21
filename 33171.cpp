#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int i, n, a, b, ans;
	ans = 0;
	cin >> n >> a >> b;
	for (i = 1; i <= n; i++) {
		if ((i % a == 0 && i % b != 0) || (i % a != 0 && i % b == 0))
			ans++;
	}
	cout << ans;
}