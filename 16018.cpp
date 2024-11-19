#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	char s[100];
	char c;
	cin >> n;
	int ans = 0;
	c = cin.get(); // \n
	for (int i = 0; i < n; i++)
		s[i] = cin.get();
	c = cin.get(); // \n
	for (int i = 0; i < n; i++) {
		c = cin.get();
		if (c == 'C' && s[i] == 'C')
			ans++;
	}
	cout << ans;
}