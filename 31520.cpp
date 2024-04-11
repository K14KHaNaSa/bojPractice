#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	if (n == 1)
		cout << 1;
	else if (n == 12)
		cout << 2;
	else if (n == 123)
		cout << 3;
	else if (n == 1234)
		cout << 4;
	else if (n == 12345)
		cout << 5;
	else if (n == 123456)
		cout << 6;
	else if (n == 1234567)
		cout << 7;
	else if (n == 12345678)
		cout << 8;
	else if (n == 123456789)
		cout << 9;
	else
		cout << -1;
}