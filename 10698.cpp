#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, x, y, z, i;
	char o, q;
	cin >> t;
	for (i = 1; i <= t; i++) {
		cin >> x >> o >> y >> q >> z;
		cout << "Case " << i << ": ";
		bool yn = false;
		if (o == '+' && x + y == z)
			yn = true;
		if (o == '-' && x - y == z)
			yn = true;
		yn ? cout << "YES\n" : cout << "NO\n";
	}
}