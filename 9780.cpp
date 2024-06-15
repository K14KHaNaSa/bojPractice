#include <iostream>
using namespace std;

long long int rsq[100001];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long int t, n, q, i, j, k;
	cin >> t;
	while (t--) {
		cin >> n >> q;
		rsq[0] = 0;
		for (k = 1; k <= n; k++) {
			cin >> rsq[k];
			rsq[k] += rsq[k - 1];
		}
		while (q--) {
			cin >> i >> j;
			cout << rsq[j + 1] - rsq[i] << '\n';
		}
		cout << '\n';
	}
}