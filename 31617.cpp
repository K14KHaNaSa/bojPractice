#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int k, n, m, b;
	cin >> k >> n;
	int a[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		a[i] += k;
	}
	cin >> m;
	int ans = 0;
	for (int i = 0; i < m; i++) {
		cin >> b;
		for (int j = 0; j < n; j++) {
			if (a[j] == b)
				ans++;
		}
	}
	cout << ans;
}