#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m, i, j, ninput;
	vector<int> sum(100001);
	cin >> n >> m;
	for (int k = 1; k <= n; k++) {
		cin >> ninput;
		sum[k] = ninput + sum[k - 1];
	}
	for (int k = 0; k < m; k++) {
		cin >> i >> j;
		cout << sum[j] - sum[i - 1] << "\n";
	}
}