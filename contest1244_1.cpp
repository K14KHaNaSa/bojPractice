#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	char c;
	int ln, n, f;
	bool n_appeared;
	cin >> t;
	c = cin.get(); // \n dummy
	while (t--) {
		c = cin.get();
		ln = 0;
		f = 0;
		n_appeared = false;
		while (c != '\n') {
			if (c == '!') {
				if (!n_appeared)
					ln++;
				else
					f++;
			}
			else {
				if (c == '0')
					n = 0;
				else
					n = 1;
				n_appeared = true;
			}
			c = cin.get();
		}
		if (f > 0)
			n = 1;
		if ((ln % 2 == 0 && n == 1) || (ln % 2 == 1 && n == 0))
			cout << "1\n";
		else
			cout << "0\n";
	}
}