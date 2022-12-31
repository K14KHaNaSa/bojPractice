#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	double d1, d2;
	double pi = 3.141592;
	cin >> d1 >> d2;
	cout << setiosflags(ios::fixed) << setprecision(6) << (d1 * 2) + (d2 * 2 * pi);
}