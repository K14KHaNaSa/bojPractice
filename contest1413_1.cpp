#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int h, w, c, d;
	cin >> h >> w >> c >> d;
	vector<int> m(h); // 9s in layer
	for (int i = 0; i < h; i++) {
		m[i] = i;
		d -= i;
		if (d < 0) {
			cout << -1;
			return 0;
		}
	}
	if (m[h - 1] < w) {
		int adder = min(d, w - m[h - 1]);
		d -= adder;
		m[h - 1] += adder;
	}
	for (int i = h - 2; i >= 0; i--) {
		// from m[i] -> m[i + 1] - 1
		// adding min(d, w - m[i])
		// and remain d
		if (d > 0) {
			int adder = min(d, m[i + 1] - 1 - m[i]);
			m[i] += adder;
			d -= adder;
		}
	}
	if (d > 0)
		cout << -1;
	else {
		for (int i = 0; i < h; i++) {
			for (int k = 0; k < w; k++)
				(k < m[i]) ? cout << 9 << ' ' : cout << 1 << ' ';
			cout << '\n';
		}
	}
}