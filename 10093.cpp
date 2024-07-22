#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long int a, b, l, r, i;
	cin >> a >> b;
	l = min(a, b);
	r = max(a, b);
	r - l > 1 ? cout << r - l - 1 : cout << 0;
	cout << '\n';
	for (i = l + 1; i < r; i++)
		cout << i << ' ';
}