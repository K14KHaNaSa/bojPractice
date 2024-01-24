#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char i;
	bool a[26];
	for (int i = 0; i < 26; i++)
		a[i] = false;
	i = cin.get();
	while (i != '#') {
		while (i != '\n') {
			if (i >= 'a' && i <= 'z')
				a[i - 'a'] = true;
			else if (i >= 'A' && i <= 'Z')
				a[i - 'A'] = true;
			i = cin.get();
		}
		// if \n
		int ans = 0;
		for (int i = 0; i < 26; i++) {
			if (a[i])
				ans++;
			a[i] = false;
		}
		cout << ans << "\n";
		i = cin.get();
	}
}