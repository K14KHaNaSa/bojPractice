#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	int a[5000];
	int c[5000][2];
	cin >> n >> a[0];
	c[0][0] = 1;
	for (int i = 1; i < n; i++) {
		cin >> a[i];
		c[i][0] = ((a[i - 1] < a[i]) ? c[i - 1][0] + 1 : 1);
	}
	c[n - 1][1] = 1;
	int ans = max(c[n - 1][0], 1);
	for (int i = n - 2; i >= 0; i--) {
		c[i][1] = ((a[i] > a[i + 1]) ? c[i + 1][1] + 1 : 1);
		ans = max(c[i][0] + c[i][1] - 1, ans);
	}
	cout << ans;
}