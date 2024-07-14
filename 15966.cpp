#include <iostream>
using namespace std;

int g[1000001];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, i, a;
	cin >> n;
	int ans = 0;
	for (i = 0; i < 1000001; i++)
		g[i] = 0;
	for (i = 0; i < n; i++) {
		cin >> a;
		g[a] = g[a - 1] + 1;
		ans = max(ans, g[a]);
	}
	cout << ans;
}