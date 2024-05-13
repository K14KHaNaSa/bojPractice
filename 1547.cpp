#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int m, x, y;
	int b = 1;
	cin >> m;
	while (m--) {
		cin >> x >> y;
		if (x == y) continue;
		if (x == b)
			b = y;
		else if (y == b)
			b = x;
	}
	cout << b;
}