#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, k, w, v;
	vector<pair<int, int>> bag(100001);
	cin >> n >> k;
	cin >> w >> v;
	bag[w].first = v;
	bag[w].second = v;
	for (int i = 1; i < n; i++) {
		cin >> w >> v;
		for (int j = 1; j <= k - w; j++) {
			bag[j + w].second = max(bag[j + w].first, bag[j].first + v);
		}
		for (int j = 1; j <= k - w; j++) {
			bag[j + w].first = max(bag[j + w].first, bag[j + w].second);
		}
		bag[w].first = max(bag[w].first, v);
	}
	int maxvalue = 0;
	for (int i = 1; i <= k; i++) {
		maxvalue = max(maxvalue, bag[i].first);
	}
	cout << maxvalue;
}