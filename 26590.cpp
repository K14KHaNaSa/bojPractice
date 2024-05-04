#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string l, r;
	cin >> l >> r;
	int len = min(l.length(), r.length());
	for (int i = 0; i < len; i++) {
		if (i % 2 == 0)
			cout << l.substr(i, 1);
		else
			cout << r.substr(i, 1);
	}
}