#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int tc;
	double p;
	cin >> tc;
	while (tc--) {
		cin >> p;
		cout << fixed << setprecision(2) << "$" << (p / 10) * 8 << "\n";
	}
}