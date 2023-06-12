#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int tc, n, s, m, t;
	cin >> tc;
	while (tc--) {
		cin >> n >> s >> m >> t;
		cout << n << " " << s + m + t << " ";
		if (s > 10 && m > 7 && t >= 12 && (s + m + t) >= 55) {
			cout << "PASS\n";
		}
		else {
			cout << "FAIL\n";
		}
	}
}