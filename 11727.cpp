#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	vector<unsigned int> dp(1001);
	dp[1] = 1;
	dp[2] = 3;
	for (int i = 3; i <= 1000; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2] * 2) % 10007;
	}
	cin >> n;
	cout << dp[n];
}