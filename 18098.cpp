#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, i, ai, ans;
	int a[100000];
	cin >> n;
	for (i = 0; i < 100000; i++)
		a[i] = false;
	for (i = 0; i < n; i++) {
		cin >> ai;
		if (ai <= 100000)
			a[ai - 1] = true;
	}
	ans = 0;
	for (i = 0; i < n; i++) {
		if (a[i])
			ans++;
	}
	cout << ans;
}