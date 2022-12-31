#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int min = 101;
		int zsum = 0;
		for (int j = 0; j < 7; j++) {
			cin >> n;
			if (n % 2 == 0) {
				zsum += n;
				if (n < min) {
					min = n;
				}
			}
		}
		cout << zsum << " " << min << "\n";
	}
}