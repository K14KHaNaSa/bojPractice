#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, a, b, l, r;
	l = 0;
	r = 0;
	cin >> n;
	while (n--) {
		cin >> a >> b;
		if (a > b)
			l += a + b;
		else if (a < b)
			r += a + b;
		else {
			l += a;
			r += b;
		}
	}
	cout << l << " " << r;
}