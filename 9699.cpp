#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int x, r, mx;
	cin >> x;
	for (int i = 1; i <= x; i++) {
		mx = 0;
		for (int j = 0; j < 5; j++) {
			cin >> r;
			mx = max(mx, r);
		}
		cout << "Case #" << i << ": " << mx << '\n';
	}
}