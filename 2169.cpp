#include <iostream>
using namespace std;

int n, m, i, j, k, lft;
int f[1000]; // floor dp
int now_value[1000];
int dp[1000]; // ( l -> r)

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m >> f[0];
	for (j= 1; j < m; j++) { // top
		cin >> f[j];
		f[j] += f[j - 1];
	}
	for (i = 1; i < n - 1; i++) { // mid
		cin >> now_value[0];
		dp[0] = now_value[0] + f[0];
		for (j = 1; j < m; j++) { // l -> r / left dp
			cin >> now_value[j];
			dp[j] = max(dp[j - 1], f[j]) + now_value[j];
		}
		int right = dp[m - 1]; // temp func f[j + 1]
		dp[m - 1] = f[m - 1] + now_value[m - 1]; // right dp
		for (j = m - 2; j >= 0; j--) { // r -> l
			lft = dp[j]; // temp func left dp
			dp[j] = max(f[j], dp[j + 1]) + now_value[j];
			f[j + 1] = right;
			right = max(lft, dp[j]);
		}
		f[0] = dp[0];
	}
	if (n > 1) {
		cin >> now_value[0];
		f[0] = f[0] + now_value[0];
		for (j = 1; j < m; j++) { // bottom
			cin >> now_value[j];
			f[j] = max(f[j - 1], f[j]) + now_value[j];
		}
	}
	cout << f[m - 1];
}