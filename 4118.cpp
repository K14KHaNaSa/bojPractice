#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, t, ap;
	bool b[50];
	cin >> n;
	while (n > 0) {
		for (int i = 1; i < 50; i++)
			b[i] = false;
		ap = 0;
		for (int i = 0; i < 6 * n; i++) {
			cin >> t;
			b[t] = true;
		}
		for (int i = 1; i < 50; i++) {
			if (b[i])
				ap++;
		}
		(ap < 49) ? cout << "No\n" : cout << "Yes\n";
		cin >> n;
	}
}