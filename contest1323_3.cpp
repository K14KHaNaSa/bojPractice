#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	(((n - 2) / 2) % 2 == 1) ? cout << n << '\n' : cout << n - 1 << '\n';
	int one = 0;
	int zero = 0;
	if (n == 2)
		one = 1;
	else {
		for (int i = 0; i < (n - 1) / 2; i++) {
			cout << n - 1 - i * 2 << ' ' << n - 2 - i * 2 << '\n';
			one++;
			if (n - 3 - i * 2 == 1) {
				one++;
				break;
			}
		}
	}
	while (one > 1) {
		cout << "1 1\n";
		one -= 2;
		zero++;
	}
	while (zero > 1) {
		cout << "0 0\n";
		zero--;
	}
	if (one == 1) {
		if (zero == 1)
			cout << "1 0\n";
		cout << "1 " << n;
	}
	else {
		cout << "0 " << n;
	}
}