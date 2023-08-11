#include <iostream>
using namespace std;

int h[100000];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> h[i];
	}
	int sh = 0;
	int ans = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (h[i] > sh) {
			sh = h[i];
			ans++;
		}
	}
	cout << ans;
}