#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long int n, m, a, now, ans;
	cin >> n >> m;
	now = 0;
	ans = 0;
	while (n--) {
		cin >> a;
		now += a;
		if (now < 0)
			now = 0;
		if (now >= m)
			ans++;
	}
	cout << ans;
}