#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n + 2; i++) {
		cout << "@";
	}
	for (int i = 0; i < n; i++) {
		cout << "\n@";
		for (int j = 0; j < n; j++) {
			cout << " ";
		}
		cout << "@";
	}
	cout << "\n";
	for (int i = 0; i < n + 2; i++) {
		cout << "@";
	}
}