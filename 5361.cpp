#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int tc;
	double a, b, c, d, e;
	cin >> tc;
	while (tc--) {
		cin >> a >> b >> c >> d >> e;
		cout << fixed << setprecision(2) << "$" << a * 350.34 + b * 230.9 + c * 190.55 + d * 125.3 + e * 180.9 << "\n";
	}
}