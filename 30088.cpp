#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, t;
	cin >> n;
	vector<long long int> p;
	while (n--) {
		cin >> m;
		int pt = 0;
		while (m--) {
			cin >> t;
			pt += t;
		}
		p.push_back(pt);
	}
	sort(p.begin(), p.end());
	long long int ans = 0;
	long long int ps = p.size();
	for (int i = 0; i < ps; i++)
		ans += p[i] * (ps - i);
	cout << ans;
}