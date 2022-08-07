#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	vector<pair<int, int>> a(1001);
	int n, val, tmp;
	cin >> n;
	a[0].first = 0;
	a[0].second = 0;
	cin >> a[1].first;
	a[1].second = 1;
	for (int i = 2; i <= n; i++) {
		cin >> val;
		a[i].first = val;
		a[i].second = 1;
		for (int j = i - 1; j > 0;j--) {
			if (val > a[j].first) {
				if (a[j].second >= a[i].second) {
					a[i].second = a[j].second + 1;
				}
				else {
					continue;
				}
			}
		}
	}

	int maxcombo = 0;
	for (int i = 1; i <= n; i++) {
		if (a[i].second > maxcombo) {
			maxcombo = a[i].second;
		}
	}
	cout << maxcombo;
}