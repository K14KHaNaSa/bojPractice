#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	unsigned long long int k[68];
	k[0] = 1;
	k[1] = 1;
	k[2] = 2;
	k[3] = 4;
	for (int i = 4; i < 68; i++) {
		k[i] = k[i - 1] + k[i - 2] + k[i - 3] + k[i - 4];
	}
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << k[n] << "\n";
	}
}