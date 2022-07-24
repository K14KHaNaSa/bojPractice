#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<int> dp(1000001, 10000);
	for (int i = 1; i < 4; i++) {
		dp[i] = i / 2;
	}
	if (n < 4) {

	}
	else {
		for (int i = 4; i <= n; i++) {
			if (i % 6 == 0 && (dp[i / 3] < dp[i - 1] || dp[i / 2] < dp[i - 1])) {
				if (dp[i / 2] > dp[i / 3]) {
					dp[i] = dp[i / 3] + 1;
				}
				else {
					dp[i] = dp[i / 2] + 1;
				}
			}
			else if (i % 3 == 0 && (dp[i / 3] < dp[i / 2] || dp[i / 3] < dp[i - 1])) {
				dp[i] = dp[i / 3] + 1;
			}
			else if (i % 2 == 0 && dp[i / 2] < dp[i - 1]) {
				dp[i] = dp[i / 2] + 1;
			}
			else {
				dp[i] = dp[i - 1] + 1;
			}
		}
	}
	cout << dp[n];
}