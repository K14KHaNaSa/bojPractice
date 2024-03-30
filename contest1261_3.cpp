#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	unsigned long long int i, n, r, powered, nopowered, temp;
	cin >> n >> r;
	powered = r;
	nopowered = 0;
	temp;
	for (i = 1; i < n; i++) {
		cin >> r;
		temp = nopowered;
		nopowered = powered;
		powered = min(temp, powered) + r;
	}
	cout << min(nopowered, powered);
}