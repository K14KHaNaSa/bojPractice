#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int tc, p, t;
	cin >> tc;
	while (tc--) {
		cin >> p >> t;
		cout << p + (t / 4) - (t / 7) << "\n";
	}
}