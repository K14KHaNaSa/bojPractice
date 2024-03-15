#include <iostream>
using namespace std;

long long int arr[200000];
long long int asum[200000];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long int n, q, k, a, b, ans;
	cin >> n >> q;
	cin >> arr[0];
	asum[0] = arr[0];
	for (int i = 1; i < n; i++) {
		cin >> arr[i];
		asum[i] = arr[i] + asum[i - 1];
	}
	int cursor = 0;
	while (q--) {
		cin >> k;
		if (k == 1) {
			cin >> a;
			cursor -= a;
			if (cursor < 0)
				cursor += n;
		}
		if (k == 2) {
			cin >> a;
			cursor += a;
			if (cursor >= n)
				cursor -= n;
		}
		if (k == 3) {
			cin >> a >> b;
			a = cursor + a - 1;
			b = cursor + b - 1;
			if (a >= n)
				a -= n;
			if (b >= n)
				b -= n;
			if (a < b)
				ans = asum[b] - asum[a] + arr[a];
			else if (a > b)
				ans = asum[n - 1] - asum[a] + asum[b] + arr[a];
			else
				ans = arr[a];
			cout << ans << "\n";
		}
	}
}