#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string re, s;
	int n;
	cin >> re >> n;
	int ans = 0;
	while (n--) {
		cin >> s;
		if (re.substr(0, 5) == s.substr(0, 5))
			ans++;
	}
	cout << ans;
}