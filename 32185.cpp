#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	vector<pair<int, int>> f; // sum, i_num
	int n, v, p, s, m;
	cin >> n >> m;
	cin >> v >> p >> s;
	int jw = v + p + s;
	for (int i = 0; i < n; i++) {
		cin >> v >> p >> s;
		f.push_back(make_pair(v + p + s, i + 1));
	}
	m--;
	sort(f.rbegin(), f.rend());
	cout << "0";
	for (int i = 0; i < n; i++) {
		if (m == 0) break;
		if (f[i].first > jw) continue;
		cout << ' ' << f[i].second;
		m--;
	}
}