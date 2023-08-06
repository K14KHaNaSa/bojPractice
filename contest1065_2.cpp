#include <iostream>
using namespace std;

string app[100];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	string a, b;
	string pre, st, ans;
	bool aexist = false;
	bool bexist = false;
	cin >> n;
	if (n == 1) {
		cin >> st;
		app[0] = st;
	}
	else {
		cin >> pre;
		bool next = false;
		if (pre == "?") {
			next = true;
		}
		app[0] = pre;
		for (int i = 1; i < n; i++) {
			cin >> st;
			app[i] = st;
			if (next) {
				b = st.substr(0, 1);
				next = false;
				bexist = true;
			}
			else if (st == "?") {
				a = pre.substr(pre.size() - 1, 1);
				next = true;
				aexist = true;
			}
			pre = st;
		}
	}
	cin >> m;
	while (m--) {
		cin >> st;
		bool nappear = false;
		if (n == 1) {
			if (st != app[0]) {
				ans = st;
			}
		}
		else if (aexist && bexist) {
			if (st.substr(0, 1) == a && st.substr(st.size() - 1, 1) == b) {
				for (int i = 0; i < n; i++) {
					if (st == app[i]) {
						nappear = true;
					}
				}
				if (!nappear) {
					ans = st;
				}
			}
		}
		else if (aexist) {
			if (st.substr(0, 1) == a) {
				for (int i = 0; i < n; i++) {
					if (st == app[i]) {
						nappear = true;
					}
				}
				if (!nappear) {
					ans = st;
				}
			}
		}
		else if (bexist) {
			if (st.substr(st.size() - 1, 1) == b) {
				for (int i = 0; i < n; i++) {
					if (st == app[i]) {
						nappear = true;
					}
				}
				if (!nappear) {
					ans = st;
				}
			}
		}
	}
	cout << ans;
}