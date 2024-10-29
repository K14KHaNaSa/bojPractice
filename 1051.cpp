#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int map[50][50];
	int n, m, a, s;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		a = cin.get(); // \n
		for (int j = 0; j < m; j++)
			map[i][j] = cin.get() - '0';
	}
	int ans = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			s = min(n - i, m - j);
			for (int k = 1; k < s; k++) {
				if ((map[i][j] == map[i][j + k]) &&
					(map[i + k][j] == map[i + k][j + k]) &&
					(map[i][j] == map[i + k][j]))
					ans = max(ans, (k + 1) * (k + 1));
			}
		}
	}
	cout << ans;
}