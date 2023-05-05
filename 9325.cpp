#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, s, n, q, p;
	cin >> t;
	while (t--) {
		cin >> s >> n;
		while (n--) {
			cin >> q >> p;
			s += q * p;
		}
		cout << s << "\n";
	}
}