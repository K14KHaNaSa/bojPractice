#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int tc;
	double a, b;
	cin >> tc;
	while (tc--) {
		cin >> a >> b;
		double amb = abs(a - b);
		cout << fixed << setprecision(1) << amb << "\n";
	}
}