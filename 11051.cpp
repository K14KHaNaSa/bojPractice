#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, k;
	vector<vector<int>> fac(1001, vector<int>(1001, 0));
	cin >> n >> k;
	fac[0][0] = 1;
	for (int i = 1; i <= n; i++) {
		fac[i][0] = 1;
		for (int j = 1; j <= i; j++) {
			fac[i][j] = fac[i - 1][j] + fac[i - 1][j - 1];
			if (fac[i][j] > 10007) {
				fac[i][j] %= 10007;
			}
		}
	}
	cout << fac[n][k];
}