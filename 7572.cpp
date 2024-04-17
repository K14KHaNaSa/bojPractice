#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	n += 56;
	cout << char('A' + (n % 12)) << (n % 10);
	// n % 12 = 5
	// n % 10 = 9
	// 2013 % 60 = 33;
	// 29
}