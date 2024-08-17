#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	bool a[26];
	int n;
	char c;
	cin >> n;
	c = cin.get(); // \n
	while (n > 0) {
		c = cin.get();
		for (int i = 0; i < 26; i++)
			a[i] = false;
		while (c != '\n') {
			if (c >= 'a' && c <= 'z')
				a[c - 'a'] = true;
			if (c >= 'A' && c <= 'Z')
				a[c - 'A'] = true;
			c = cin.get();
		}
		int chk = 0;
		for (int i = 0; i < 26; i++)
			if (a[i])	chk++;
		if (chk == 26)
			cout << "pangram";
		else {
			cout << "missing ";
			for (int i = 0; i < 26; i++)
				if (!a[i])	cout << char('a' + i);
		}
		cout << '\n';
		n--;
	}
}