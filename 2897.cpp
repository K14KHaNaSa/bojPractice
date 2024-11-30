#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char p[50][50];
	char ch;
	int r, c;
	int b[2];
	int ans[5] = { 0, 0, 0, 0, 0 };
	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		ch = cin.get();
		for (int j = 0; j < c; j++)
			p[i][j] = cin.get();
	}
	for (int i = 0; i < r - 1; i++) {
		for (int j = 0; j < c - 1; j++) {
			b[0] = 0;
			b[1] = 0;
			for (int ii = 0; ii < 2; ii++) {
				for (int jj = 0; jj < 2; jj++) {
					if (p[i + ii][j + jj] == '.')
						b[0]++;
					if (p[i + ii][j + jj] == 'X')
						b[1]++;
				}
			}
			for (int k = 0; k < 5; k++) {
				if (b[0] == 4 - k && b[1] == k)
					ans[k]++;
			}
		}
	}
	for (int i = 0; i < 5; i++)
		cout << ans[i] << '\n';
}