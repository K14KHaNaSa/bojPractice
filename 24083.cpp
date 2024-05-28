#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b;
	cin >> a >> b;
	a += b;
	(a % 12 == 0) ? cout << 12 : cout << a % 12;
}