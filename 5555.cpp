#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string s, r;
	int n, ans, i;
	cin >> s >> n;
	ans = 0;
	while (n--) {
		cin >> r;
		r = r + r.substr(0, s.length() - 1);
		for (i = 0; i < 10; i++) {
			if (s == r.substr(i, s.length())) {
				ans++;
				break;
			}
		}
	}
	cout << ans;
}