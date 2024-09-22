#include <iostream>
using namespace std;

unsigned long long int a[20];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	unsigned long long int n, p, q, r, s, sn;
	cin >> n >> p >> q >> r >> s >> a[1];
	sn = a[1];
	for (int i = 2; i <= n; i++) {
		if (i % 2 == 0) {
			a[i] = a[i / 2] * p + q;
			sn += a[i];
		}
		else {
			a[i] = a[(i - 1) / 2] * r + s;
			sn += a[i];
		}
	}
	cout << sn;
}