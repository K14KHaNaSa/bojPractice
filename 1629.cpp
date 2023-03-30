#include <iostream>
using namespace std;

typedef unsigned long long int ull;
ull a, b, c;
ull answer = 0;

ull zegop(ull ch) {
	if (ch == 0) {
		return 1;
	}
	else if (ch == 1) {
		return a % c;
	}
	else {
		ull halfch = zegop(ch / 2);
		if (ch % 2 == 0) {
			return (halfch * halfch) % c;
		}
		else {
			return (((halfch * halfch) % c) * a) % c;
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> a >> b >> c;
	cout << zegop(b);
}