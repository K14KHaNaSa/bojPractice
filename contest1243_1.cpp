#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	double a, m, n;
	cin >> a >> m >> n;
	double p = min(m, n) / a;
	if (p * 2 < max(m, n))
		cout << fixed << setprecision(8) << p * 2;
	else
		cout << fixed << setprecision(8) << max(m, n);
}