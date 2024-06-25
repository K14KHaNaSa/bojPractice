#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, i, y, k, ys, ks;
	cin >> t;
	while (t--) {
		ys = 0;
		ks = 0;
		for (i = 0; i < 9; i++) {
			cin >> y >> k;
			ys += y;
			ks += k;
		}
		if (ys > ks)
			cout << "Yonsei\n";
		else if (ys < ks)
			cout << "Korea\n";
		else
			cout << "Draw\n";
	}
}