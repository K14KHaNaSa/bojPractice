#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, i, ti, ans;
	int t[10001];
	cin >> n >> m;
	while (n != 0 & m != 0) {
		ans = 0;
		for (i = 1; i <= n; i++)
			t[i] = 0;
		while (m--) {
			cin >> ti;
			t[ti]++;
		}
		for (i = 1; i <= n; i++) {
			if (t[i] > 1)
				ans++;
		}
		cout << ans << '\n';
		cin >> n >> m;
	}
}