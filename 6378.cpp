#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string n, n_ss;
	int dr, s;
	bool rpt;
	cin >> n;
	while (n != "0") {
		dr = 0;
		for (int i = 0; i < n.length(); i++) {
			n_ss = n.substr(i, 1);
			if (n_ss == "1")
				dr += 1;
			if (n_ss == "2")
				dr += 2;
			if (n_ss == "3")
				dr += 3;
			if (n_ss == "4")
				dr += 4;
			if (n_ss == "5")
				dr += 5;
			if (n_ss == "6")
				dr += 6;
			if (n_ss == "7")
				dr += 7;
			if (n_ss == "8")
				dr += 8;
			if (n_ss == "9")
				dr += 9;
		}
		rpt = true;
		while (rpt) {
			s = 0;
			while (dr > 0) {
				s += dr % 10;
				dr /= 10;
			}
			if (s < 10) {
				cout << s << '\n';
				rpt = false;
			}
			else
				dr = s;
		}
		cin >> n;
	}
}