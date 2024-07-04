#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	double pa, ab, slg, b;
	cin >> pa;
	ab = 0;
	slg = 0;
	while (pa--) {
		cin >> b;
		if (b >= 0) {
			ab++;
			slg += b;
		}
	}
	cout << setprecision(8) << slg / ab;
}