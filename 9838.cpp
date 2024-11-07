#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	int ans[20001];
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> k;
		ans[k] = i;
	}
	for (int i = 1; i <= n; i++)
		cout << ans[i] << '\n';
}