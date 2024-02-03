#include <iostream>
using namespace std;

bool chk_v(char c) {
	if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
		c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		return true;
	else
		return false;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	char s;
	cin >> n;
	s = cin.get();
	while (n--) {
		s = cin.get();
		int v = 0;
		int nv = 0;
		while (s != '\n') {
			if ((s >= 'A' && s <= 'Z') || (s >= 'a' && s <= 'z')) {
				if (chk_v(s))
					v++;
				else
					nv++;
			}
			s = cin.get();
		}
		cout << nv << " " << v << "\n";
	}
}