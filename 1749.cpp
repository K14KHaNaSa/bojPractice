#include <iostream>
using namespace std;

int arr[201][201];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	int ans = -10001;
	for (int j = 0; j <= m; j++) {
		arr[0][j] = 0;
	}
	for (int i = 1; i <= n; i++) {
		arr[i][0] = 0;
		for (int j = 1; j <= m; j++) {
			cin >> arr[i][j];
			ans = max(ans, arr[i][j]);
			arr[i][j] += arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {

			for (int k = 0; k <= i; k++) {
				for (int l = 0; l <= j; l++) {
					if (!(i == k || j == l)) {
						ans = max(ans, arr[i][j] - arr[k][j] - arr[i][l] + arr[k][l]);
					}
				}
			}

		}
	}
	cout << ans;
}