#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long int k, n, x;
	cin >> k >> n;
	if (n == 1)
		cout << -1;
	else {
		x = (k * n) / (n - 1);
		if ((k * n) % (n - 1) > 0)
			x++;
		cout << x;
	}
}