#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long int game[101][101];
	int n, val;
	cin >> n;
	cin >> val;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			game[i][j] = 0;
		}
	}

	game[1 + val][1] = 1;
	game[1][1 + val] = 1;
	for (int i = 2; i <= n; i++) {
		cin >> val;
		if (i + val <= n && game[1][i] == 1) {
			game[1][i + val]++;
		}
		if (1 + val <= n && game[1][i] == 1) {
			game[1 + val][i]++;
		}
	}
	for (int j = 2; j <= n; j++) {
		for (int i = 1; i <= n; i++) {
			cin >> val;
			if (val == 0) {
				continue;
			}
			else if (game[j][i] > 0) {
				if (i + val <= n && game[j][i] > 0) {
					game[j][i + val] += game[j][i];
				}
				if (j + val <= n && game[j][i] > 0) {
					game[j + val][i] += game[j][i];
				}
			}
		}
	}
	cout << game[n][n];
	//checker
	/*cout << "\n";
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << game[i][j] <<" ";
		}
		cout << "\n";
	}
	*/
}