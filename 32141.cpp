#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, h, d, ans;
	cin >> n >> h;
	for (int i = 1; i <= n; i++) {
		cin >> d;
		h -= d;
		if (h <= 0) {
			cout << i;
			return 0;
		}
	}
	cout << -1;
}