#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	if (n < 2)
		cout << 1;
	else if (n > 4)
		cout << 0;
	else if (n == 3)
		cout << 6;
	else // n = 4
		cout << 4;
}