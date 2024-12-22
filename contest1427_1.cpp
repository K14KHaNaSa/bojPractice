#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, x, n, k, a;
	int c = 0;
	cin >> t >> x >> n;
	for (int i = 0; i < n; i++) {
		cin >> k;
		while (k--) {
			cin >> a;
			if (a == x)
				c++;
		}
	}
	(n == c) ? cout << "YES" : cout << "NO";
}