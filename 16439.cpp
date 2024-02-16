#include <iostream>
using namespace std;

int n, m, ans;
int a[30][30];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	}
	ans = 0;
	for (int i = 0; i < m; i++) {
		for (int j = i + 1; j < m; j++) {
			for (int k = j + 1; k < m; k++) {
				int now = 0;
				for (int l = 0; l < n; l++)
					now += max(max(a[l][i], a[l][j]), a[l][k]);
				ans = max(ans, now);
			}
		}
	}
	cout << ans;
}