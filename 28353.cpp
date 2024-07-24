#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k, i, wi;
	cin >> n >> k;
	vector<int> w;
	for (i = 0; i < n; i++) {
		cin >> wi;
		w.push_back(wi);
	}
	sort(w.rbegin(), w.rend());
	int ans = 0;
	for (i = 0; i < n; i++) {
		if (w[i] > k) continue; // already picked cats
		for (int j = i + 1; j < n; j++) {
			if (w[i] + w[j] <= k) {
				w[i] = k + 1; // pick
				w[j] = k + 1; // cats
				ans++;
			}
		}
	}
	cout << ans;
}