#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, exist;
	cin >> n;
	vector<vector<bool>> path(n, vector<bool>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> exist;
			if (exist == 1) {
				path[i][j] = true;
			}
		}
	}
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (path[i][k] && path[k][j]) {
					path[i][j] = true;
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (path[i][j]) {
				cout << "1 ";
			}
			else {
				cout << "0 ";
			}
		}
		cout << "\n";
	}
}