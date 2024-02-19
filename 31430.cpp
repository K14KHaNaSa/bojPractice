#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long int t, a, b, c, i, si;
	char s;
	cin >> t;
	if (t == 1) {
		cin >> a >> b;
		c = a + b;
		for (i = 12; i >= 0; i--) {
			long long int ttf = pow(26, i);
			if (c / ttf > 0) {
				cout << char(int('a') + c / ttf);
				c %= ttf;
			}
			else
				cout << 'a';
		}
	}
	if (t == 2) {
		s = cin.get();
		c = 0;
		for (i = 12; i >= 0; i--) {
			long long int ttf = pow(26, i);
			s = cin.get();
			si = int(s) - int('a');
			c += si * ttf;
		}
		cout << c;
	}
}