#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	unsigned int a, b, c;
	cin >> a >> b >> c;
	if (a + b < c * 2) {
		cout << a + b;
	}
	else {
		cout << a + b - c * 2;
	}
}