#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, j;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> j;
		for (int k = 0; k < j; k++) {
			cout << "#";
		}
		cout << "\n";
		for (int m = 1; m < j - 1; m++) {
			for (int k = 1; k <= j; k++) {
				if (k == 1 || k == j) {
					cout << "#";
					if (k == j) {
						cout << "\n";
					}
				}
				else {
					cout << "J";
				}
			}
		}		
		if (j > 1) {
			for (int k = 0; k < j; k++) {
				cout << "#";
			}
			cout << "\n";
		}
		cout << "\n";
	}
}