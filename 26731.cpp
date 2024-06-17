#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char a;
	bool s[26];
	for (int i = 0; i < 26; i++)
		s[i] = false;
	for (int i = 0; i < 25; i++) {
		a = cin.get();
		s[int(a - 'A')] = true;
	}
	for (int i = 0; i < 26; i++) {
		if (!s[i])
			cout << char('A' + i);
	}
}