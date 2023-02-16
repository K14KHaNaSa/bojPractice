#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	int a;
	double p = 0;
	double q = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a % 3 == 0) {
			q += 1;
		}
		else if (a % 3 == 1) {
			p += 1;
		}
		else if (a % 3 == 2) {
			p -= 1;
			q -= 1;
		}
	}
	cout << fixed << setprecision(9) << p << " " << q;
}