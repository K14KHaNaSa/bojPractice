#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, i;
	int h[1000];
	int v[1000];
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> h[i];
	for (i = 0; i < n; i++)
		cin >> v[i];
	int ans = max(v[0] - h[0], 0);
	if (h[0] > v[0]) {
		cout << 0;
		return 0;
	}
	for (i = 1; i < n; i++) {
		if (h[i] + ans > v[i]) {
			cout << ans;
			return 0;
		}
		if (h[i] + ans < v[i]) {
			cout << ans + 1;
			return 0;
		}
	}
	cout << ans;
}