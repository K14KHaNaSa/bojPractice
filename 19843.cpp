#include <iostream>
using namespace std;

int d(string dow) {
	if (dow == "Mon")
		return 0;
	if (dow == "Tue")
		return 24;
	if (dow == "Wed")
		return 48;
	if (dow == "Thu")
		return 72;
	if (dow == "Fri")
		return 96;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, h1, h2;
	string d1, d2;
	cin >> t >> n;
	while (n--) {
		cin >> d1 >> h1 >> d2 >> h2;
		h1 += d(d1);
		h2 += d(d2);
		t -= (h2 - h1);
	}
	(t > 48) ? cout << -1 : cout << max(t, 0);
}