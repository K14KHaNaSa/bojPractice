#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int x;
	cin >> x;
	(x % 7 == 2) ? cout << 1 : cout << 0;
}