#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	double xyz[100][3];
	double x, y, z, d, r;
	int n;
	cin >> n >> r;
	double ans = r * r * r * 4 * double(n) * 3.14159265359 / 3;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++)
			cin >> xyz[i][j];
	}
	for (int i = 0; i < n - 1; i++) {
		x = (xyz[i][0] - xyz[i + 1][0]) * (xyz[i][0] - xyz[i + 1][0]);
		y = (xyz[i][1] - xyz[i + 1][1]) * (xyz[i][1] - xyz[i + 1][1]);
		z = (xyz[i][2] - xyz[i + 1][2]) * (xyz[i][2] - xyz[i + 1][2]);
		d = sqrt(x + y + z);
		if (d < 2 * r)
			ans -= 2 * 3.14159265359 * (r - d / 2) * (r - d / 2) * (r * 2 + d / 2) / 3;
	}
	x = (xyz[0][0] - xyz[n - 1][0]) * (xyz[0][0] - xyz[n - 1][0]);
	y = (xyz[0][1] - xyz[n - 1][1]) * (xyz[0][1] - xyz[n - 1][1]);
	z = (xyz[0][2] - xyz[n - 1][2]) * (xyz[0][2] - xyz[n - 1][2]);
	d = sqrt(x + y + z);
	if (d < 2 * r)
		ans -= 2 * 3.14159265359 * (r - d / 2) * (r - d / 2) * (r * 2 + d / 2) / 3;
	cout << fixed << setprecision(10) << ans;
}