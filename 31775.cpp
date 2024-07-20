#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string s;
	bool l = false;
	bool k = false;
	bool p = false;
	for (int i = 0; i < 3; i++) {
		cin >> s;
		if (s.substr(0, 1) == "l")
			l = true;
		if (s.substr(0, 1) == "k")
			k = true;
		if (s.substr(0, 1) == "p")
			p = true;
	}
	(l && k) && p ? cout << "GLOBAL" : cout << "PONIX";
}