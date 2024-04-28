#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, k;
	bool b[1001];
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		b[i] = false;
	while (m--) {
		cin >> k;
		for (int i = k; i <= n; i += k)
			b[i] = true;
	}
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		if (b[i])
			ans += i;
	}
	cout << ans;
}