#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	int a, b;
	cin >> a >> b;
	a = (a % 10) * 100 + ((a / 10) % 10) * 10 + a / 100;
	b = (b % 10) * 100 + ((b / 10) % 10) * 10 + b / 100;
	if (a > b) {
		cout << a;
	}
	else {
		cout << b;
	}
}