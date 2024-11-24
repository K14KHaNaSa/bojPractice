#include <iostream>
using namespace std;

long long int a[200000][3];
long long int n, k, ai, i, ans;

long long int llmin(long long int l, long long int r) {
	if (l > r)
		return r;
	else
		return l;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> k;
	for (i = 0; i < n; i++)
		cin >> a[i][0];
	a[0][1] = a[0][0];
	a[n - 1][2] = a[n - 1][0];
	for (i = 1; i < n; i++)
		a[i][1] = a[i - 1][1] + a[i][0];
	for (i = n - 2; i >= 0; i--)
		a[i][2] = a[i + 1][2] + a[i][0];
	for (i = 0; i < n; i++) {
		if (i >= k)
			a[i][1] = 0;
		else
			a[i][1] += (k - 1 - i) * a[i][0];
	}
	for (i = n - 1; i >= 0; i--) {
		if (i > n - k)
			a[i][2] += (k - n + i) * a[i][0];
		else
			a[i][2] = 0;
	}
	ans = 0;
	for (i = 0; i < n; i++)
		ans = max(ans, max(a[i][1], a[i][2]));
	cout << ans;
}