#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char choco[5000][5000];
	char c;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		c = cin.get();
		for (int j = 0; j <= i; j++) {
			c = cin.get();
			choco[i][j] = c;
		}			
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j <= i; j++) {
			if (choco[i][j] == 'G') continue;
			if (choco[i][j] == 'R') {
				if (choco[i + 1][j] == 'R' && choco[i + 1][j + 1] == 'R') {
					choco[i + 1][j] = 'G'; // not R && B
					choco[i + 1][j + 1] = 'G';
				}
				else {
					cout << "0";
					return 0;
				}
			}
			else if (choco[i][j] == 'B') {
				if (j == i) {
					cout << "0";
					return 0;
				}
				else if (choco[i][j + 1] == 'B' && choco[i + 1][j + 1] == 'B') {
					choco[i][j + 1] = 'G';
					choco[i + 1][j + 1] = 'G';
				}
				else {
					cout << "0";
					return 0;
				}
			}
		}
	}
	for (int j = 0; j < n; j++) {
		if (choco[n - 1][j] != 'G') {
			cout << "0";
			return 0;
		}
	}
	cout << "1";
}