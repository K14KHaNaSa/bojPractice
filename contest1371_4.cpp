#include <iostream>
using namespace std;

int map[1001][1001];
int mal[1001][1001];
int n, d;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> d;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
			mal[i][j] = 0;
		}
	}
	int ans_r, ans_c;
	int ans = 100000001;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			if (map[i][j] == 1) continue;
			for (int r = max(0, i - d); r < min(n, i + d + 1); r++) {
				for (int c = max(0, j - d); c < min(n, j + d + 1); c++) {
					if (map[r][c] > 0) {
						mal[i][j]++;
					}
				}
			}
			if (mal[i][j] == 0) {
				cout << i + 1 << " " << j + 1;
				return 0;
			}
			if (mal[i][j] < ans) {
				ans_r = i + 1;
				ans_c = j + 1;
				ans = mal[i][j];
			}
		}
	}
	cout << ans_r << " " << ans_c << "\n" << ans;
}