#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int r, c, q, b, r1, c1, r2, c2;
	vector<vector<int>> bright(1001, vector<int>(1001));
	cin >> r >> c >> q;
	for (int i = 1; i <= r; i++) {
		for (int j = 1; j <= c; j++) {
			cin >> b;
			bright[i][j] = b + bright[i - 1][j] + bright[i][j - 1] - bright[i - 1][j - 1];
		}
	}
	for (int i = 0; i < q; i++) {
		cin >> r1 >> c1 >> r2 >> c2;
		cout << (bright[r2][c2] - bright[r1 - 1][c2] - bright[r2][c1 - 1] + bright[r1 - 1][c1 - 1]) / ((r2 - r1 + 1) * (c2 - c1 + 1)) << "\n";
	}
}