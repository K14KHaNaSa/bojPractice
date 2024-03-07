#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int p, n;
	double d, a, b, f;
	cin >> p;
	while (p--) {
		cin >> n >> d >> a >> b >> f;
		cout << fixed << setprecision(6) << n << " " << d * f / (a + b) << "\n";
	}
}