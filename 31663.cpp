#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int ans[45] = { 0, };
	int app[45] = { 0, };
	char c;
	int n, charlen;
	cin >> n;
	c = cin.get();
	int maxlen = 0;
	for (int i = 0; i < n;i++) {
		c = cin.get();
		charlen = 0;
		while (c != '\n') {
			ans[charlen] += int(c) - int('a');
			app[charlen]++;
			charlen++;
			c = cin.get();
			maxlen = max(maxlen, charlen);
		}
	}
	for (int i = 0; i < maxlen; i++) {
		cout << char(ans[i] / app[i] + 'a');
	}
}