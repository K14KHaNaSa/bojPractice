#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	int h[100];
	cin >> t;
	for (int tc = 1; tc <= t; tc++) {
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> h[i];
		int ans = 0;
		for (int i = 1; i < n - 1; i++) {
			if (h[i] > h[i - 1] && h[i] > h[i + 1])
				ans++;
		}
		cout << "Case #" << tc << ": " << ans << "\n";
	}
}