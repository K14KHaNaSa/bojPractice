#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	int a = 0;
	int z = 0;
	int n, x;
	cin >> n >> x;
	if ((x < n) || (x > n * 26)) {
		cout << "!";
	}
	else {
		while (x > 26) {
			z++;
			x -= 26;
			n--;
			if (x < n) {
				z--;
				n++;
				x += 26;
				break;
			}
		}
		while (n > 1) {
			a++;
			x--;
			n--;
		}
		for (int i = 0; i < a; i++) {
			cout << "A";
		}
		if (x > 0) {
			cout << char(x + 64);
		}
		for (int i = 0; i < z; i++) {
			cout << "Z";
		}
	}
}