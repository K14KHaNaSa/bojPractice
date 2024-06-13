#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int isbn = 0;
	int er, i, m;
	char n;
	for (i = 1; i < 13; i++) {
		n = cin.get();
		if (n == '*')
			er = i;
		else
			isbn += int(n - '0') * (i % 2 == 1 ? 1 : 3);
	}
	n = cin.get();
	m = int(n - '0');
	isbn += m;
	int ans = 0;
	if (er % 2 == 1) {
		while ((isbn + ans) % 10 != 0)
			ans++;
	}
	else {
		while ((ans * 3 + isbn) % 10 != 0)
			ans++;
	}
	cout << ans;
}