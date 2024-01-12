#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char ans[80][80];
	int h, w, n, r1, r2, c1, c2;
	cin >> h >> w >> n;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++)
			ans[i][j] = '.';
	}
	for (int k = 0; k < n; k++) {
		cin >> r1 >> c1 >> r2 >> c2;
		for (int i = r1 - 1; i < r2; i++)
			ans[i][c1 - 1] = k + 'a';
		for (int i = r1 - 1; i < r2; i++)
			ans[i][c2 - 1] = k + 'a';
		for (int j = c1 - 1; j < c2; j++)
			ans[r1 - 1][j] = k + 'a';
		for (int j = c1 - 1; j < c2; j++)
			ans[r2 - 1][j] = k + 'a';
	}
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++)
			cout << ans[i][j];
		cout << "\n";
	}
}