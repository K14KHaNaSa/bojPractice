#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b;
	cin >> a >> b;
	while (!(a == 0 && b == 0)) {
		int p = a - b;
		int t = 0;
		if ((p > 2) && (p % 2 != 0)) {
			t = 1;
			p -= 3;
		}
		cout << p / 2 << " " << t << "\n";
		cin >> a >> b;
	}
}