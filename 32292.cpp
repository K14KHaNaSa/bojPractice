#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, sl;
	string s, l, r;
	bool changed;
	cin >> t;
	while (t--) {
		cin >> n >> s;
		while (true) {
			changed = false;
			sl = s.length();
			if (sl < 3)
				break;
			for (int i = 0; i < sl; i++) {
				if (s.substr(i, 3) == "ABB") {
					(i == 0) ? l = "" : l = s.substr(0, i);
					i + 3 == sl ? r = "" : r = s.substr(i + 3, sl - i - 2);
					s = l + "BA";
					s += r;
					changed = true;
					i = sl + 1; // break for loop
				}
			}
			if (!changed)
				break;
		}
		cout << s << '\n';
	}
}