#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	unsigned long long int n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		bool tak = false;
		if ((n + 1) % 3 == 0) {
			cout << "TAK\n";
		}
		else if (n % 9 == 0) {
			cout << "TAK\n";
		}
		else {
			cout << "NIE\n";
		}
	}
}