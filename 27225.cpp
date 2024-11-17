#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	int ans = min(n, m) * 2;
	if (max(n - m, m - n) % 2 == 1)
		ans++;
	cout << ans;
}