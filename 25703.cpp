#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	cout << "int a;\n";
	for (int i = 1; i <= n; i++) {
		cout << "int ";
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		if (i != 1) {
			cout << "ptr" << i << " = &";
		}
		else {
			cout << "ptr = &";
		}
		if (i == 1) {
			cout << "a;\n";
		}
		else {
			if (i != 2) {
				cout << "ptr" << i - 1 << ";\n";
			}
			else {
				cout << "ptr;\n";
			}
		}
	}
}