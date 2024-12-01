#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	int abcd[4];
	cin >> n >> abcd[0] >> abcd[1] >> abcd[2] >> abcd[3];
	char u = cin.get();
	char c;
	bool ok = true;
	for (int i = 0; i < n; i++) {
		c = cin.get();
		if (i == 0) {
			if (c != 'a')
				ok = false;
		}
		if (c == u)
			ok = false;
		else
			abcd[c - 'a']--;
		u = c;
	}
	if (c != 'a')
		ok = false;
	for (int i = 0; i < 4; i++) {
		if (abcd[i] < 0)
			ok = false;
	}
	ok ? cout << "Yes" : cout << "No";
}