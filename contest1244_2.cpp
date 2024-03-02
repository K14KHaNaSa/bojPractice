#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		if (n == 1) {
			cout << "0";
		}
		else if (n % 2 == 0) {
			while (n--)
				cout << "1";
		}
		else if (((n - 3) / 2) % 2 == 1) {
			for (int i = 0; i < n / 2; i++)
				cout << "1";
			cout << "0";
			for (int i = 0; i < n / 2; i++)
				cout << "1";
		}
		else {
			for (int i = 0; i < n / 2; i++)
				cout << "1";
			cout << "2";
			for (int i = 0; i < n / 2; i++)
				cout << "1";
		}
		cout << "\n";
	}
}