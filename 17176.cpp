#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, cn, i;
	char c;
	int crypt[53];
	cin >> n;
	for (i = 0; i < 53; i++)
		crypt[i] = 0;
	for (i = 0; i < n; i++) {
		cin >> cn;
		crypt[cn]++;
	}
	bool ans = true;
	c = cin.get(); // \n dummy
	for (i = 0; i < n; i++) {
		c = cin.get();
		if (c == ' ')
			crypt[0]--;
		else if (c >= 'A' && c <= 'Z')
			crypt[c - 'A' + 1]--;
		else
			crypt[c - 'a' + 27]--;
	}
	for (i = 0; i < 53; i++) {
		if (crypt[i] != 0)
			ans = false;
	}
	ans ? cout << 'y' : cout << 'n';
}