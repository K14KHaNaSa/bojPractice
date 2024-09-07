#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int b;
	cin >> b;
	int p = 5 * b - 400;
	cout << p << '\n';
	(p > 100) ? cout << -1 : (p < 100 ? cout << 1 : cout << 0);
}