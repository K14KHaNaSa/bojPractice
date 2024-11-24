#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a1, a2, b1, b2;
	cin >> a1 >> b1 >> a2 >> b2;
	int a = a2 * b1 + a1 * b2;
	int b = b1 * b2;
	int i = 2;
	int m = min(a, b);
	while (i <= m) {
		if (a % i == 0 && b % i == 0) {
			a /= i;
			b /= i;
			m = min(a, b);
		}
		else
			i++;
	}
	cout << a << ' ' << b;
}