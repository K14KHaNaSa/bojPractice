#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	double l;
	cin >> l;
	cout << setiosflags(ios::fixed) << setprecision(15) << (l * l * sqrt(3)) / 4;
}