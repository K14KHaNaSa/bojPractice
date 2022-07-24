#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	int n;
	int chk = 0;
	cin >> n;
	if (n >= 5) {
		for (int i = n / 5; i >= 0; i--) {
			for (int j = (n - (i * 5)); j >= 0; j--) {
				if (n == (i * 5 + j * 3)) {
					cout << i + j;
					chk = 1;
					return 0;
				}
			}
		}
		if (chk != 1) {
			cout << -1;
		}
	}
	else if (n % 3 == 0) {
		cout << n / 3;
	}
	else
		cout << -1;
}