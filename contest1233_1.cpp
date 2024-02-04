#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b, c;
	cin >> a >> b >> c;
	cout << a + b - c << "\n";
	if (b / 1000 > 0)
		cout << a * 10000 + b - c;
	else if (b / 100 > 0)
		cout << a * 1000 + b - c;
	else if (b / 10 > 0)
		cout << a * 100 + b - c;
	else
		cout << a * 10 + b - c;
}