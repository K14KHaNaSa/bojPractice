#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n, m;
	char l, r;
	char cl[26];
	char sl[26];
	char nl[10];
	for (int i = 0; i < 26; i++) {
		cl[i] = 'A' + i;
		sl[i] = 'a' + i;
	}
	for (int i = 0; i < 10; i++)
		nl[i] = '0' + i;
	cin >> n;
	while (n--) {
		cin >> l >> r;
		if (l >= 'A' && l <= 'Z')
			cl[l - 'A'] = r;
		else if (l >= 'a' && l <= 'z')
			sl[l - 'a'] = r;
		else
			nl[l - '0'] = r;
	}
	cin >> m;
	while (m--) {
		cin >> l;
		if (l >= 'A' && l <= 'Z')
			cout << cl[l - 'A'];
		else if (l >= 'a' && l <= 'z')
			cout << sl[l - 'a'];
		else
			cout << nl[l - '0'];
	}
}