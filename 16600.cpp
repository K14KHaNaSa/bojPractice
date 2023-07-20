#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	double n;
	cin >> n;
	cout << fixed << setprecision(6) << 4 * sqrt(n);
}