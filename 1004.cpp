#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, x1, y1, x2, y2, cx, cy, r, n;
	cin >> t;
	while (t--) {
		cin >> x1 >> y1 >> x2 >> y2;
		cin >> n;
		int answer = 0;
		for (int i = 0; i < n; i++) {
			cin >> cx >> cy >> r;
			bool sin = false;
			bool ein = false;
			if (pow(max(cx - x1, x1 - cx), 2) + pow(max(cy - y1, y1 - cy), 2) < pow(r, 2)) {
				sin = true;
			}
			if (pow(max(cx - x2, x2 - cx), 2) + pow(max(cy - y2, y2 - cy), 2) < pow(r, 2)) {
				ein = true;
			}
			if ((sin && !ein) || (!sin && ein)) {
				answer++;
			}
		}
		cout << answer << "\n";
	}
}