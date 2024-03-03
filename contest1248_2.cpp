#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, ea;
	string s, items;
	cin >> n >> s;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		bool added = false;
		cin >> items >> ea;
		if (s == items) {
			ans += ea;
			added = true;
		}
		if (items.length() > s.length() && !added) {
			if (items.substr(0, s.length() + 1) == s + "_") {
				ans += ea;
				added = true;
			}
			else if (items.substr(items.length() - s.length() - 1, s.length() + 1) == "_" + s) {
				ans += ea;
				added = true;
			}
		}
		if (items.length() > s.length() + 1 && !added) {
			for (int i = 1; i < items.length() - s.length() - 2; i++) {
				if (items.substr(i, s.length() + 2) == "_" + s + "_") {
					ans += ea;
					break;
				}
			}
		}
	}
	cout << ans;
}