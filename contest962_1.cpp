#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, k;
	cin >> n >> m >> k;
	int two = 0;
	while (n > 0) {
		n /= 2;
		two++;
	}
	two--;
	int maximumable = two;
	int kbasic = 0;
	int ans = 0;
	while (k > 0) {
		k /= 2;
		ans++;
	}
	ans--;
	for (int i = 0; i < m; i++) {
		ans++;
		ans = min(ans, maximumable);
	}
	cout << ans;
}