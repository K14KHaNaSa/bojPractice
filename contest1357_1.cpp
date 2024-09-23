#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int pal = 0;
	string s;
	bool chkr;
	int n, sl;
	cin >> n;
	while (n--) {
		cin >> s;
		chkr = true;
		sl = s.length();
		for (int i = 0; i < sl / 2; i++) {
			if (s.substr(i, 1) != s.substr(sl - 1 - i, 1))
				chkr = false;
		}
		if (chkr)
			pal++;
	}
	cout << (pal - 1) * pal;
}