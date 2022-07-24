#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	int n = -1;
	while (n != 0) {
		cin >> n;
		if (n / 10000 != 0) {
			if (n / 10000 == n % 10) {
				if ((n % 10000) / 1000 == (n / 10) % 10) {
					cout << "yes\n";
				}
				else
					cout << "no\n";
			}
			else
				cout << "no\n";
		}
		else if (n / 1000 != 0) {
			if ((n / 1000) == (n % 10)) {
				if ((n % 1000) / 100 == (n / 10) % 10) {
					cout << "yes\n";
				}
				else
					cout << "no\n";
			}
			else
				cout << "no\n";
		}
		else if (n / 100 != 0) {
			if (n / 100 == n % 10) {
				cout << "yes\n";
			}
			else
				cout << "no\n";
		}
		else if (n / 10 != 0) {
			if (n / 10 == n % 10) {
				cout << "yes\n";
			}
			else
				cout << "no\n";
		}
		else if (n % 10 != 0) {
			cout << "yes\n";
		}
		else
			return 0;
	}	
}