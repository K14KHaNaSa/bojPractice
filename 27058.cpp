#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char dk[26];
	char c;
	for (int i = 0; i < 26; i++) {
		c = cin.get();
		dk[i] = c;
	}
	c = cin.get(); // \n
	c = cin.get();
	while (c != '\n') {
		if (c >= 'a' && c <= 'z')
			cout << dk[c - 'a'];
		else if (c >= 'A' && c <= 'Z')
			cout << char(int(dk[c - 'A']) - 'a' + 'A');
		else
			cout << c;
		c = cin.get();
	}
}