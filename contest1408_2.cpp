#include <iostream>
using namespace std;

int pow(int base, int exp) {
	int rtn = 1;
	while (exp--)
		rtn *= base;
	return rtn;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b, c;
	cin >> a >> b >> c;
	int pw = 0;
	for (int i = 1; i <= 4; i++) {
		pw += ((c % pow(2, i)) / pow(2, i - 1)) * pow(2, i - 1);
	}
	for (int i = 1; i <= 4; i++) {
		pw += ((b % pow(2, i)) / pow(2, i - 1)) * pow(2, i - 1) * 16;
	}
	for (int i = 1; i <= 4; i++) {
		pw += ((a % pow(2, i)) / pow(2, i - 1)) * pow(2, i - 1) * 16 * 16;
	}
	if (pw / 1000 < 1)
		cout << 0;
	if (pw / 100 < 1)
		cout << 0;
	if (pw / 10 < 1)
		cout << 0;
	cout << pw;
}