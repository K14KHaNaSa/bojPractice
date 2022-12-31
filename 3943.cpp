#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		int maxnum = n;
		while (n > 1) {
			if (n % 2 == 0) {
				n /= 2;
			}
			else {
				n = n * 3 + 1;
				if (n > maxnum) {
					maxnum = n;
				}
			}
		}
		cout << maxnum << "\n";
	}
}