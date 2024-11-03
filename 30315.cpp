#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int k, i, j;
	double xy[1000][2];
	double ans = 2147483647;
	cin >> k;
	for (i = 0; i < k; i++) {
		cin >> xy[i][0] >> xy[i][1];
	}
	for (i = 0; i < k; i++) {
		double s = 0;
		for (j = 0; j < k; j++)
			s += sqrt(pow(max(xy[i][0] - xy[j][0], xy[j][0] - xy[i][0]),2) + pow(max(xy[i][1] - xy[j][1], xy[j][1] - xy[i][1]),2));
		if (s < ans)
			ans = s;
	}
	cout << fixed << setprecision(10) << ans / (k - 1);
}