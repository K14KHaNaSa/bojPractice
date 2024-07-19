#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, f, c;
	f = 0;
	cin >> n;
	while (n--) {
		cin >> c;
		if (f == 0)
			f = c;
		else if (c % f == 0) {
			cout << c << '\n';
			f = 0;
		}
	}
}