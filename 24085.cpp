#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, ai, ans, r;
	cin >> n;
	int a[2001];
	for (int i = 1; i < 2001; i++) {
		a[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		cin >> ai;
		a[ai]++;
	}
	ans = 0;
	r = 101;
	for (int i = 1; i < 2001; i++) {
		if (a[i] > 0 && a[i] < r) {
			ans = i;
			r = a[i];
		}
	}
	cout << ans;
}