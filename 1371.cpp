#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char s;
	int abc[26];
	for (int i = 0; i < 26; i++)
		abc[i] = 0;
	s = cin.get();
	while (s != EOF) {
		if (s >= 'a' && s <= 'z')
			abc[s - 'a']++;
		s = cin.get();
	}
	int mx = 0;
	for (int i = 0; i < 26; i++)
		mx = max(mx, abc[i]);
	for (int i = 0; i < 26; i++) {
		if (abc[i] == mx)
			cout << char('a' + i);
	}
}