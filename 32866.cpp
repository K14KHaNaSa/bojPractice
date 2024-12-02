#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	double n, x;
	cin >> n >> x;
	double m = n * ((100 - x) / 100);
	cout << fixed << setprecision(10) << 100 * (n - m) / m;
}