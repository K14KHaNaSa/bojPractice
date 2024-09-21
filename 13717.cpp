#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k, m, ev, mx_i, ans;
	string p, mx_p;
	cin >> n;
	mx_i = 0;
	ans = 0;
	while (n--) {
		cin >> p >> k >> m;
		ev = 0;
		while (k <= m) {
			m -= k;
			m += 2;
			ev++;
		}
		ans += ev;
		if (ev > mx_i) {
			mx_i = ev;
			mx_p = p;
		}
	}
	cout << ans << '\n' << mx_p;
}