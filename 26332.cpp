#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, c, p;
	cin >> n;
	while (n--) {
		cin >> c >> p;
		cout << c << ' ' << p << '\n' << p + (c - 1) * (p - 2) << '\n';
	}
}