#include <iostream>
using namespace std;

int f[46];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, x;
	f[0] = 1;
	f[1] = 1;
	for (int i = 2; i <= 45; i++) {
		f[i] = f[i - 1] + f[i - 2];
	}
	cin >> t;
	while (t--) {
		cin >> x;
		cout << f[x] << "\n";
	}
}