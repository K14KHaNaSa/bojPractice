#include <iostream>
using namespace std;

int a[100000];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, i;
	cin >> n;
	int now = 1;
	int ans = 1;
	cin >> a[0];
	for (i = 1; i < n; i++) {
		cin >> a[i];
		if (a[i] >= a[i - 1]) {
			now++;
			ans = max(ans, now);
		}
		else
			now = 1;
	}
	now = 1;
	for (i = n - 2; i >= 0; i--) {
		if (a[i] >= a[i + 1]) {
			now++;
			ans = max(ans, now);
		}
		else
			now = 1;
	}
	cout << ans;
}