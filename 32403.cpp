#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, t, a, mint;
	vector<int> tt;
	int ans = 0;
	cin >> n >> t;
	for (int i = 1; i <= t; i++) {
		if (t % i == 0)
			tt.push_back(i);
	}
	while (n--) {
		cin >> a;
		mint = max(a - t, t - a);
		for (int i = 0; i < tt.size(); i++) 
			mint = min(mint, max(a - tt[i], tt[i] - a));
		ans += mint;
	}
	cout << ans;
}