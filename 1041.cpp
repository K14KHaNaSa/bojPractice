#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	unsigned long long int n, a, b, c, d, e, f, three, two, one;
	cin >> n >> a >> b >> c >> d >> e >> f;
	three = min(min(min(a + b + c, a + b + d), min(a + c + e, a + d + e)), min(min(b + c + f, b + d + f), min(c + e + f, d + e + f)));
	two = min(min(min(min(a + b, a + c), min(a + d, a + e)), min(min(b + c, b + d), min(b + f, c + e))), min(min(c + f, d + e), min(d + f, e + f)));
	one = min(min(min(a, b), min(c, d)), min(e, f));
	if (n < 2) {
		cout << a + b + c + d + e + f - max(max(max(a, b), max(c, d)), max(e, f));
	}
	else {
		cout << three * 4 + two * (8 * n - 12) + one * (5 * n * n - 16 * n + 12);
	}
}