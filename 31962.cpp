#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, x, s, t;
	int ans = -1;
	cin >> n >> x;
	while (n--) {
		cin >> s >> t;
		if (s + t <= x)
			ans = max(ans, s);
	}
	cout << ans;
}