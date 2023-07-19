#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	if (n == 1) {
		if (m == 1) {
			cout << "1\n1";
		}
		else {
			cout << "2\n";
			for (int i = 0; i < m; i++) {
				if (i % 2 == 0) {
					cout << "1 ";
				}
				else {
					cout << "2 ";
				}
			}
		}
	}
	else if (m == 1) {
		cout << "2\n";
		for (int i = 0; i < n; i++) {
			if (i % 2 == 0) {
				cout << "1\n";
			}
			else {
				cout << "2\n";
			}
		}
	}
	else {
		cout << "4\n";
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (i % 2 == 0 && j % 2 == 0) {
					cout << "1 ";
				}
				else if (i % 2 == 0 && j % 2 == 1) {
					cout << "2 ";
				}
				else if (i % 2 == 1 && j % 2 == 0) {
					cout << "3 ";
				}
				else {
					cout << "4 ";
				}
			}
			cout << "\n";
		}
	}
}