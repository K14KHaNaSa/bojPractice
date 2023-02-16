#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	double a;
	cin >> a;
	while (a != 0) {
		double ans = 1;
		ans += a + a * a + a * a * a + a * a * a * a;
		cout << fixed << setprecision(2) << ans << "\n";
		cin >> a;
	}
}