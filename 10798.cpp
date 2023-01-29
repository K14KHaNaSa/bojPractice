#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	vector<vector<char>> ys(5,vector<char>(15,'?'));
	char input;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 15; j++) {
			input = cin.get();
			if (j == 14 && input != '\n') {
				ys[i][j] = input;
				input = cin.get();
			}
			else if (input != '\n') {
				ys[i][j] = input;
			}
			else {
				break;
			}
		}
	}
	for (int j = 0; j < 15; j++) {
		for (int i = 0; i < 5; i++) {
			if (ys[i][j] != '?') {
				cout << ys[i][j];
			}
		}
	}
}