#include <iostream>
using namespace std;

int hmap[1000];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int m, n, mt;
	cin >> m >> n;
	int ans = 0;
	int pre, now;
	m--;
	for (int i = 0; i < n; i++) {
		cin >> mt;
		if (mt != 0) {
			hmap[i] = 0;
		}
		else {
			hmap[i] = 1;
			ans = 1;
		}
	}
	while (m--) {
		cin >> mt;
		if (mt != 0) {
			pre = 0;
		}
		else {
			pre = 1;
			ans = max(ans, 1);
		}
		for (int i = 1; i < n; i++) {
			cin >> mt;
			if (mt != 0) {
				now = 0;
			}
			else {
				now = min(min(hmap[i - 1], hmap[i]), pre) + 1;
				ans = max(ans, now);
			}
			hmap[i - 1] = pre;
			pre = now;
		}
		hmap[n - 1] = pre;
	}
	cout << ans;
}