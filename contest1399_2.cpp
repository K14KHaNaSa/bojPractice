#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	int ans = 0;
	bool pal = true;
	char s[200000];
	char wn;
	wn = cin.get();
	for (int i = 0; i < n; i++)
		s[i] = cin.get();
	for (int i = 0; i < n / 2; i++) {
		if (s[i] == '?' && s[n - 1 - i] == '?')
			ans += 26;
		else if (s[i] != '?' && s[n - 1 - i] != '?' && s[i] != s[n - 1 - i]) {
			pal = false;
			break;
		}
		else if (s[i] != s[n - 1 - i]) // one is ?
			ans++;
	}
	pal ? cout << ans : cout << 0;
}