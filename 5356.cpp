#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, l;
	char c;
	cin >> t;
	while (t--) {
		cin >> l >> c;
		for (int i = 0; i < l; i++) {
			for (int j = 0; j <= i; j++) {
				cout << c;
			}
			c += 1;
			if (c > 'Z')
				c = 'A';
			cout << "\n";
		}
		cout << "\n";
	}
}