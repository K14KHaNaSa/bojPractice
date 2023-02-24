#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b;
	cin >> a >> b;
	if (a == 1 || b == 1) {
		cout << max(a, b);
	}
	else {
		cout << (a + b - 2) * 2;
	}
}