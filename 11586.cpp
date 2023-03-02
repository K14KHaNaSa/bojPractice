#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	cin >> n;
	vector<vector<char>> origin(n, vector<char>(n));
	char sang;
	for (int i = 0; i < n; i++) {
		sang = cin.get();
		for (int j = 0; j < n; j++) {
			sang = cin.get();
			origin[i][j] = sang;
		}
	}
	cin >> k;
	if (k == 1) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << origin[i][j];
			}
			cout << "\n";
		}
	}
	if (k == 2) {
		for (int i = 0; i < n; i++) {
			for (int j = n - 1; j >= 0; j--) {
				cout << origin[i][j];
			}
			cout << "\n";
		}
	}
	if (k == 3) {
		for (int i = n - 1; i >= 0; i--) {
			for (int j = 0; j < n; j++) {
				cout << origin[i][j];
			}
			cout << "\n";
		}
	}
}