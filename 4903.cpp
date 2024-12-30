#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b;
	cin >> a >> b;
	while (!(a == -1 && b == -1)) {
		cout << a << '+' << b;
		if (a != 1 && b != 1)
			cout << '!';
		cout << '=' << a + b << '\n';
		cin >> a >> b;
	}
}