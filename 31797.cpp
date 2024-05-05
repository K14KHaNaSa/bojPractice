#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, h;
	vector<pair<int, int>> t;
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		cin >> h;
		t.push_back(make_pair(h, i));
		cin >> h;
		t.push_back(make_pair(h, i));
	}
	sort(t.begin(), t.end());
	cout << t[(n - 1) % (m * 2)].second;
}