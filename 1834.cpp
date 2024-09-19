#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	unsigned long long int n, i, ans;
	cin >> n;
	ans = 0;
	for (i = 1; i < n; i++) {
		ans += i * n + i;
	}
	cout << ans;
}