#include <iostream>
#include <string>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, i;
	string tc;
	long long int c;
	int len;
	int digit[10];
	int ans[17];
	cin >> t;
	while (t--) {
		cin >> tc;
		len = tc.length();
		c = stoll(tc);
		for (i = 0; i < 10; i++)
			digit[i] = 0;
		for (i = 0; i < len; i++) {
			digit[c % 10]++;
			c /= 10;
		}
		for (i = 0; i < len - 1; i++) {
			for (int j = 9; j >= 0; j--) {
				if (digit[j] > 0) {
					ans[i] = j;
					digit[j]--;
					break;
				}
			}
		}
		int remain = 0;
		for (i = 0; i < 10; i++) {
			if (digit[i] > 0)
				remain = i;
		}
		ans[len - 2] += remain;
		bool ten = true;
		for (i = len - 2; i >= 0; i--) {
			if (ans[i] / 10 > 0) {
				ans[i] %= 10;
				ans[i - 1] += 1;
			}
			else {
				ten = false;
				break;
			}
		}
		if (ten)
			cout << 1;
		for (i = 0; i < len - 1; i++)
			cout << ans[i];
		cout << '\n';
	}
}