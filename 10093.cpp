#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long int a, b, l, r;
	cin >> a >> b;
	l = min(a, b);
	r = max(a, b);
	r - l > 1 ? cout << r - l - 1 : cout << 0;
	cout << '\n';
	for (++l; l < r; l++)
		cout << l << ' ';
}