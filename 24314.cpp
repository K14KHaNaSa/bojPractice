#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a1, a0, c, n0;
	cin >> a1 >> a0 >> c >> n0;
	((a0 * -1) <= n0 * (a1 - c) && c <= a1) ? cout << 1 : cout << 0;
}