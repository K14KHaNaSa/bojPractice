#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, a, b, c, d, ai, bi, ci, di;
	cin >> n;
	n--;
	cin >> a >> b >> c >> d;
	cout << (c - a) * 2 + (d - b) * 2 << '\n';
	while (n--) {
		cin >> ai >> bi >> ci >> di;
		a = min(a, ai);
		b = min(b, bi);
		c = max(c, ci);
		d = max(d, di);
		cout << (c - a) * 2 + (d - b) * 2 << '\n';
	}
}