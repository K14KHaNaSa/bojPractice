#include <iostream>
using namespace std;

int absq(int a, int b) {
	return max(a - b, b - a) * max(a - b, b - a);
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int c[400][3];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> c[i][0] >> c[i][1] >> c[i][2];
	for (int i = 0; i < n; i++) {
		int ans = 0;
		int xi = c[i][0];
		int yi = c[i][1];
		int ri = c[i][2];
		for (int j = 0; j < n; j++) {
			if (i == j) continue;
			int xj = c[j][0];
			int yj = c[j][1];
			int rj = c[j][2];
			if (absq(xi, xj) + absq(yi, yj) <= (ri + rj) * (ri + rj))
				ans++;
		}
		cout << ans << '\n';
	}
}