#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, k;
	int ans = 0;
	int d = 0;
	cin >> n >> m >> k;
	while (d < n) {
		n += m;
		d += k;
		ans++;
	}
	cout << ans;
}