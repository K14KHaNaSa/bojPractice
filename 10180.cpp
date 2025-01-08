#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, ans;
	double d, v, f, c;
	cin >> t;
	while (t--) {
		cin >> n >> d;
		ans = 0;
		while (n--) {
			cin >> v >> f >> c;
			if ((v * f) / c >= d)
				ans++;
		}
		cout << ans << '\n';
	}
}