#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int x, n;
	cin >> x >> n;
	int act = 0;
	while (x < n) {
		int r = x % 3;
		if (r == 0)
			x++;
		else if (r == 1)
			x *= 2;
		else if (r == 2)
			x *= 3;
		act++;
	}
	cout << act;
}