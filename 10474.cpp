#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b;
	cin >> a >> b;
	while (!(a == 0 && b == 0)) {
		cout << a / b << " " << a % b << " / " << b << "\n";
		cin >> a >> b;
	}
}