#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char c;
	int s[26];
	for (int i = 0; i < 26; i++)
		s[i] = 0;
	c = cin.get();
	while (c != EOF) {
		s[int(c - 'a')]++;
		c = cin.get();
	}
	for (int i = 0; i < 26; i++)
		cout << s[i] << " ";
}