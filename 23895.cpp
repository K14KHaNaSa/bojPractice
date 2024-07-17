#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, b;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cin >> n >> b;
		vector<int> a(n);
		int sum = 0;
		int ans = 0;
		for (int j = 0; j < n; j++)
			cin >> a[j];
		sort(a.begin(), a.end());
		for (int j = 0; j < n; j++) {
			if (sum + a[j] <= b) {
				sum += a[j];
				ans++;
			}
			else
				break;
		}
		cout << "Case #" << i << ": " << ans << '\n';
	}
}