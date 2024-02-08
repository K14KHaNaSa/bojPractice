#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string s;
	cin >> s;
	string ans = s;
	for (int i = 1; i < s.size(); i++) {
		for (int j = 1; j <= s.size() - i; j++) {
			if (s.substr(i, j) > ans)
				ans = s.substr(i, j);
		}
	}
	cout << ans;
}