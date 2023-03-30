#include <iostream>
using namespace std;

void cl() {
	cout << "|";
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	cl();
	for (int i = 1; i < n - 1; i++) {
		cout << "-";
	}
	cl();
	cout << "\n";
	for (int i = 1; i < n - 1; i++) {
		cl();
		for (int j = 1; j < n - 1; j++) {
			if (j == i || j == n - 1 - i) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cl();
		cout << "\n";
	}
	cl();
	for (int i = 1; i < n - 1; i++) {
		cout << "-";
	}
	cl();
}