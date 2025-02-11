#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long int n, t, i, x, h, ans, j, shadow;
	vector<pair<long long int, long long int>> xh;
	vector<long long int> shadow_length;
	cin >> n >> t;
	for (i = 0; i < n; i++) {
		cin >> x >> h;
		xh.push_back(make_pair(x, h));
		shadow_length.push_back(0);
	}
	sort(xh.begin(), xh.end());
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			shadow = xh[i].second - (xh[j].first - xh[i].first) * t;
			if (shadow > 0) {
				if (shadow > xh[j].second)
					shadow = xh[j].second;
				if (shadow_length[j] < shadow)
					shadow_length[j] = shadow;
			}
			else
				break;
			if (shadow < xh[j].second)
				break;
		}
	}
	ans = 0;
	for (i = 1; i < n; i++)
		ans += shadow_length[i];
	cout << ans;
}