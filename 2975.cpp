#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int b, a;
	char l;
	cin >> b >> l >> a;
	while (!(b == 0 && l == 'W' && a == 0)) {
		if (l == 'W')
			b -= a;
		else if (l == 'D')
			b += a;
		if (b < -200)
			cout << "Not allowed\n";
		else
			cout << b << '\n';
		cin >> b >> l >> a;
	}
}