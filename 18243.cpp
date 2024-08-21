#include <iostream>
using namespace std;

int n;
int fr[100][100]; // friend

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int k, a, b;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			fr[i][j] = 100000;
	}
	while (k--) {
		cin >> a >> b;
		fr[a - 1][b - 1] = 1;
		fr[b - 1][a - 1] = 1;
	}
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i == j)	continue;
				fr[i][j] = min(fr[i][j], fr[i][k] + fr[k][j]);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j)	continue;
			if (fr[i][j] > 6) {
				cout << "Big World!";
				return 0;
			}
		}
	}
	cout << "Small World!";
}