#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int ch[26];
	char a;
	for (int i = 0; i < 26; i++)
		ch[i] = 0;
	a = cin.get();
	while (a != '\n') {
		ch[a - 'a']++;
		a = cin.get();
	}
	int ans = 0; // 0 = not yet / 1 = even / 2 = odd / 3 = neno
	for (int i = 0; i < 26; i++) {
		if (ch[i] > 0) {
			if (ch[i] % 2 == 0) { // even
				if (ans < 2)
					ans = 1;
				else
					ans = 3;
			}
			else { // odd
				if (ans == 0 || ans == 2)
					ans = 2;
				else
					ans = 3;
			}
		}
		if (ans > 2)
			break;
	}
	cout << ans - 1;
}