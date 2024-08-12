#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, k, p;
	vector<pair<int, string>> ps;
	string s;
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++) {
		cin >> s >> p;
		ps.push_back(make_pair(p, s));
	}
	int t = 0;
	for (int i = 0; i < k; i++) {
		cin >> s;
		for (int j = 0; j < n; j++) {
			if (ps[j].second == s) {
				t += ps[j].first;
				ps[j].first = 0;
				break;
			}
		}
	}
	sort(ps.begin(), ps.end());
	int sm = 0;
	for (int i = k; i < m; i++)
		sm += ps[i].first;
	cout << t + sm << ' ';
	sm = 0;
	for (int i = n - 1; i >= n - m + k; i--)
		sm += ps[i].first;
	cout << t + sm;
}