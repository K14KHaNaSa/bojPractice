#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char s;
	int sl[26];
	int cl[26];
	int n[10];
	for (int i = 0; i < 26; i++) {
		sl[i] = 0;
		cl[i] = 0;
	}
	for (int i = 0; i < 10; i++)
		n[i] = 0;
	s = cin.get();
	while (s != '#') {
		if (s >= 'a' && s <= 'z')
			sl[s - 'a']++;
		else if (s >= 'A' && s <= 'Z')
			cl[s - 'A']++;
		else if (s >= '0' && s <= '9')
			n[s - '0']++;
		else if (s == '\n') {
			for (int i = 0; i < 26; i++) {
				if (sl[i] > 0) {
					while (sl[i]--)
						cout << char('a' + i);
				}
				sl[i] = 0;
			}
			for (int i = 0; i < 26; i++) {
				if (cl[i] > 0) {
					while (cl[i]--)
						cout << char('A' + i);
				}
				cl[i] = 0;
			}
			for (int i = 0; i < 10; i++) {
				if (n[i] > 0) {
					while (n[i]--)
						cout << char('0' + i);
				}
				n[i] = 0;
			}
			cout << '\n';
		}
		s = cin.get();
	}
}