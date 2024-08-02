#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, q, a;
	int qmap[2001];
	cin >> n >> m;
	qmap[0] = 0;
	for (int j = 1; j <= m; j++)
		qmap[j] = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> q;
			qmap[j] += q;
		}
	}
	for (int j = 1; j <= m; j++)
		qmap[j] += qmap[j - 1];
	cin >> a;
	int ans = 0;
	for (int j = a; j <= m; j++)
		ans = max(ans, qmap[j] - qmap[j - a]);
	cout << ans;
}