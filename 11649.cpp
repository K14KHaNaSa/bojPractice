#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	string s;
	vector<string> ans;
	cin >> n;
	for (int i = 0; i < n;i++) {
		cin >> s;
		reverse(s.begin(), s.end());
		ans.push_back(s);
	}
	sort(ans.begin(), ans.end());
	for (int i = 0; i < n; i++)
		cout << ans[i] << '\n';
}