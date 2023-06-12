#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	double d1, d2, k;
	cin >> k >> d1 >> d2;
	cout << k * k - ((d1 - d2) / 2) * ((d1 - d2) / 2);
}