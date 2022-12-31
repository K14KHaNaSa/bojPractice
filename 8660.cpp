#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	unsigned long long int n, minusb;
	long long int a;
	minusb = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a < 0) {
			minusb++;
		}
	}
	cout << (n - 1) * minusb;
}