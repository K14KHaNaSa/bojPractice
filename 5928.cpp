#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int d, h, m;
	cin >> d >> h >> m;
	d -= 11;
	int ans = d * 24 * 60 + h * 60 + m - 11 * 60 - 11;
	(ans < 0) ? cout << -1 : cout << ans;
}