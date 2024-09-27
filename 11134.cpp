#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, c;
	cin >> t;
	while (t--) {
		cin >> n >> c;
		(n % c == 0) ? cout << n / c << '\n' : cout << (n / c) + 1 << '\n';
	}
}