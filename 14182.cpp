#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	while (n != 0) {
		if (n > 5000000) {
			cout << (n / 5) * 4 << "\n";
		}
		else if (n > 1000000) {
			cout << (n / 10) * 9 << "\n";
		}
		else {
			cout << n << "\n";
		}
		cin >> n;
	}
}