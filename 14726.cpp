#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	int n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		n = cin.get();
		int sum = 0;
		for (int j = 0; j < 16; j++) {
			n = cin.get();
			n -= 48;
			if (j % 2 == 0) {
				n *= 2;
			}
			if (n > 9) {
				sum += (n / 10) + (n % 10);
			}
			else {
				sum += n;
			}
		}
		if (sum % 10 == 0) {
			cout << "T\n";
		}
		else {
			cout << "F\n";
		}
	}
}