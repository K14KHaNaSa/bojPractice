#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int b[32];
	int n, k, f, t;
	cin >> n;
	for (int i = 1; i < 32; i++)
		b[i] = 0;
	while (n--) {
		cin >> f >> t;
		for (int i = f; i < t; i++)
			b[i]++;
	}
	cin >> k;
	int ans = 1;
	for (int i = 1; i < 32; i++) {
		if (b[i] > k)
			ans = 0;
	}
	cout << ans;
}