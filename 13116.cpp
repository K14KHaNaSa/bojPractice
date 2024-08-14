#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, a, b;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		while (a != b)
			a < b ? b /= 2 : a /= 2;
		cout << a * 10 << '\n';
	}
}