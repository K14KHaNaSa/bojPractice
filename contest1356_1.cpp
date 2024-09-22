#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int q, ans;
	string s;
	cin >> q;
	while (q--) {
		cin >> s;
		ans = 0;
		if (s.length() > 2) {
			for (int i = 0; i < s.length() - 2; i++) {
				if (s.substr(i, 3) == "WOW")
					ans++;
			}
		}
		cout << ans << '\n';
	}
}