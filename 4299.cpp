#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int pl, m;
	cin >> pl >> m;
	if (pl < m || (pl - m) / 2 < 0 || (pl + m) % 2 == 1 || (pl - m) % 2 == 1) {
		cout << -1;
	}
	else {
		cout << (pl + m) / 2 << " " << (pl - m) / 2;
	}
}