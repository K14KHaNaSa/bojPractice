#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k, a, i;
	bool ok = true;
	cin >> n >> k;
	int yaksu = 1;
	for (i = k; i > 0; i--) {
		if ((n % i == 0) && (k % i == 0)) {
			yaksu = i;
			break;
		}
	}
	for (i = 0; i < n; i++) {
		cin >> a;
		if (a % yaksu != i % yaksu)
			ok = false;
	}
	ok ? cout << "YES" : cout << "NO";
}