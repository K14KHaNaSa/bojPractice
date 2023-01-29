#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k, even, odd, num;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k;
		even = 0;
		odd = 0;
		for (int j = 0; j < k; j++) {
			cin >> num;
			if (num % 2 == 0) {
				even += num;
			}
			else {
				odd += num;
			}
		}
		if (even > odd) {
			cout << "EVEN\n";
		}
		else if (odd > even) {
			cout << "ODD\n";
		}
		else {
			cout << "TIE\n";
		}
	}
}