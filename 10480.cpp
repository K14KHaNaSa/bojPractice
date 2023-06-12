#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, x;
	cin >> n;
	while (n--) {
		cin >> x;
		if (x % 2 == 0) {
			cout << x << " is even\n";
		}
		else {
			cout << x << " is odd\n";
		}
	}
}