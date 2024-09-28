#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, p, ans;
	cin >> n >> m;
	int s[1000];
	while (!(n == 0 && m == 0)) {
		for (int i = 0; i < n; i++)
			s[i] = 0;
		while (m--) {
			for (int i = 0; i < n; i++) {
				cin >> p;
				s[i] += p;
			}
		}
		ans = 0;
		for (int i = 0; i < n; i++)
			ans = max(ans, s[i]);
		cout << ans << '\n';
		cin >> n >> m;
	}
}