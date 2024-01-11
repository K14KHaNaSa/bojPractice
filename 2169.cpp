#include <iostream>
using namespace std;

int n, m, i, j, k;
int f[1001][1001]; // floor dp
int now_value[1001];
int left_dp[1001]; // ( l -> r)
int right_dp[1002]; // ( r -> l)

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m >> f[0][1];
	left_dp[0] = 0;
	right_dp[m + 1] = 0;
	for (j= 2; j <= m; j++) { // top
		cin >> f[0][j];
		f[0][j] += f[0][j - 1];
	}
	for (i = 1; i < n - 1; i++) { // mid
		cin >> now_value[1];
		left_dp[1] = now_value[1] + f[i - 1][1];
		for (j = 2; j <= m; j++) { // l -> r
			cin >> now_value[j];
			left_dp[j] = max(left_dp[j - 1], f[i - 1][j]) + now_value[j];
		}
		right_dp[m] = now_value[m] + f[i - 1][m];
		f[i][m] = max(left_dp[m], right_dp[m]);
		for (j = m - 1; j > 0; j--) { // r -> l
			right_dp[j] = max(right_dp[j + 1], f[i-1][j]) + now_value[j];
			f[i][j] = max(left_dp[j], right_dp[j]);
		}
	}
	if (n > 1) {
		cin >> now_value[1];
		f[n - 1][1] = f[n - 2][1] + now_value[1];
		for (j = 2; j <= m; j++) { // bottom
			cin >> now_value[j];
			f[n - 1][j] = max(f[n - 1][j - 1], f[n - 2][j]) + now_value[j];
		}
	}
	cout << f[n - 1][m];
}