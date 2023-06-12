#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char mobis;
	bool m = false;
	bool o = false;
	bool b = false;
	bool i = false;
	bool s = false;
	mobis = cin.get();
	while (mobis != '\n') {
		if (mobis == 'M') {
			m = true;
		}
		if (mobis == 'O') {
			o = true;
		}
		if (mobis == 'B') {
			b = true;
		}
		if (mobis == 'I') {
			i = true;
		}
		if (mobis == 'S') {
			s = true;
		}
		mobis = cin.get();
	}
	if (m && o && b && i && s) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}