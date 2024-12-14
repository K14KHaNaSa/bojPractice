#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	double k, a, i;
	cin >> k >> a >> i;
	double ans = 0;
	ans += k * 0.229 * 0.324 * 2;
	ans += a * 0.297 * 0.420 * 2;
	ans += i * 0.210 * 0.297;
	cout << fixed << setprecision(10) << ans;
}