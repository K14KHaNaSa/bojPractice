#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, i;
	char s[100];
	char c;
	cin >> n;
	c = cin.get(); //\n
	for (i = 0; i < n; i++) {
		c = cin.get();
		s[i] = c;
	}
	c = cin.get(); //\n
	int ans = 0;
	for (i = 0; i < n; i++) {
		c = cin.get();
		if (c != s[i])
			ans++;
	}
	cout << ans;
}