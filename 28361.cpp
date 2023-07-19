#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	int prnt = 1;
	cout << n << "\n";
	if (n % 3 == 0) {
		while (prnt <= n) {
			cout << prnt << " ";
			if(prnt % 3 == 0) {
				prnt--;
			}
			else {
				prnt += 2;
			}
		}
		cout << "1";
	}
	else if (n % 3 == 1) {
		cout << 1 << " ";
		prnt++;
		while (prnt <= n) {
			cout << prnt << " ";
			if (prnt % 3 == 1) {
				prnt--;
			}
			else {
				prnt += 2;
			}
		}
		cout << "1";
	}
	else {
		cout << 1 << " ";
		prnt++;
		while (prnt <= n) {
			cout << prnt << " ";
			if (prnt % 3 == 1) {
				prnt--;
			}
			else {
				prnt += 2;
			}
		}
		cout << "1";
	}
}