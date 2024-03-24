#include <iostream>
using namespace std;

void o(void) {
	cout << 1;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b, c;
	cin >> a >> b >> c;
	if (a + b == c)
		o();
	else if (a + c == b)
		o();
	else if (b + c == a)
		o();
	else
		cout << 0;
}