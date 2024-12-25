#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	double x, y, z;
	int n;
	cin >> x >> y >> n;
	z = x / y;
	while (n--) {
		cin >> x >> y;
		if (x / y < z)
			z = x / y;
	}
	cout << fixed << setprecision(2) << z * 1000;
}