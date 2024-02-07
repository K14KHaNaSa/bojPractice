#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, lph;
	cin >> n >> lph;
	vector<int> loc(n);
	for (int i = 0; i < n; i++)
		cin >> loc[i];
	sort(loc.begin(), loc.end());
	int ans = 0;
	lph *= 5;
	for (int i = 0; i < n; i++) {
		if (loc[i] <= lph) {
			ans++;
			lph -= loc[i];
		}
		else
			break;
	}
	cout << ans;
}