#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, ans;
	bool u;
	char c;
	cin >> t;
	c = cin.get(); // \n
	while (t--) {
		c = cin.get();
		ans = 0;
		u = true;
		while (c != '\n') {
			if (c == 'D')
				u = false;
			else if (u)
				ans++;
			c = cin.get();
		}
		cout << ans << '\n';
	}
}