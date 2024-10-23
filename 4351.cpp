#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long int m, n, p, i;
	vector<pair<string, long long int>> dic;
	string s;
	cin >> m >> n;
	for (i = 0; i < m; i++) {
		cin >> s >> p;
		dic.push_back(make_pair(s, p));
	}
	while (n--) {
		cin >> s;
		long long int ans = 0;
		while (s != ".") {
			for (i = 0; i < m; i++) {
				if (dic[i].first == s) {
					ans += dic[i].second;
					break;
				}
			}
			cin >> s;
		}
		cout << ans << '\n';
	}
}