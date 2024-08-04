#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int z, n, g, m;
	cin >> z;
	while (z--) {
		cin >> n;
		g = (n - 1) / 3;
		m = (n - 1) % 3;
		cout << char('A' + (g + m) % 4) << '\n';
	}
}