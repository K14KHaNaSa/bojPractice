#include <iostream>
using namespace std;

bool map[200][200]; // false = . / true = O
bool boom[200][200];
bool nmodone[200][200]; // n % 4 == 1
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int r, c, n;
	cin >> r >> c >> n;
	// n mod 4 --> 1 = nmodone / 3 = boom / 2, 4 = all O
	char maptype;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			boom[i][j] = true;
			nmodone[i][j] = true;
		}
	}
	for (int i = 0; i < r; i++) {
		maptype = cin.get();
		for (int j = 0; j < c; j++) {
			maptype = cin.get();
			if (maptype == 'O') {
				map[i][j] = true;
				boom[i][j] = false;
				if (i > 0) {
					boom[i - 1][j] = false;
				}
				if (i < r - 1) {
					boom[i + 1][j] = false;
				}
				if (j > 0) {
					boom[i][j - 1] = false;
				}
				if (j < c - 1) {
					boom[i][j + 1] = false;
				}
			}
			else {
				map[i][j] = false;
			}
		}
	}
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (boom[i][j]) {
				nmodone[i][j] = false;
				if (i > 0) {
					nmodone[i - 1][j] = false;
				}
				if (i < r - 1) {
					nmodone[i + 1][j] = false;
				}
				if (j > 0) {
					nmodone[i][j - 1] = false;
				}
				if (j < c - 1) {
					nmodone[i][j + 1] = false;
				}
			}
		}
	}
	if (n == 1) {
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				if (map[i][j]) {
					cout << "O";
				}
				else {
					cout << ".";
				}
			}
			cout << "\n";
		}
	}
	else if (n % 2 == 0) {
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				cout << "O";
			}
			cout << "\n";
		}
	}
	else if (n % 4 == 1) {
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				if (nmodone[i][j]) {
					cout << "O";
				}
				else {
					cout << ".";
				}
			}
			cout << "\n";
		}
	}
	else {
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				if (boom[i][j]) {
					cout << "O";
				}
				else {
					cout << ".";
				}
			}
			cout << "\n";
		}
	}
}