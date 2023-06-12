#include <iostream>
#include <iomanip>
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
		cout << fixed << setprecision(2) << "The height of the triangle is " << (a * 2) / b << " units\n";
	}
}