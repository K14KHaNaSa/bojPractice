#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string arr[10][10];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < 10; i++) {
		bool ans = true;
		for (int j = 1; j < 10; j++) {
			if (arr[i][0] != arr[i][j]) {
				ans = false;
				break;
			}
		}
		if (ans) {
			cout << "1";
			return 0;
		}
	}
	for (int i = 0; i < 10; i++) {
		bool ans = true;
		for (int j = 1; j < 10; j++) {
			if (arr[0][i] != arr[j][i]) {
				ans = false;
				break;
			}
		}
		if (ans) {
			cout << "1";
			return 0;
		}
	}
	cout << "0";
}