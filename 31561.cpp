#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	double m;
	cin >> m;
	if (m <= 30)
		cout << fixed << setprecision(1) << m / 2;
	else
		cout << fixed << setprecision(1) << (m - 30) * 3 / 2 + 15;
}