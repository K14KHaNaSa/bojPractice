#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char s[101];
	char c;
	int t, a, b, l;
	c = cin.get();
	l = 0;
	while (c != '\n') {
		s[l] = c;
		l++;
		c = cin.get();
	}
	cin >> t;
	while (t--) {
		cin >> a >> b;
		c = s[a];
		s[a] = s[b];
		s[b] = c;
	}
	for (int i = 0; i < l; i++)
		cout << s[i];
}