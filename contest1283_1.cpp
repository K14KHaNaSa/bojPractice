#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, b;
	int a[10];
	int ans = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cin >> m;
	while (m--) {
		cin >> b;
		ans += a[b - 1];
	}
	cout << ans;
}