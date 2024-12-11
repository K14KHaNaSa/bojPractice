#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int r, c, a, b;
	cin >> r >> c >> a >> b;
	for (int i = 0; i < r * a; i++) {
		for (int j = 0; j < c * b; j++) {
			if (((i / a) % 2) + ((j / b) % 2) != 1)
				cout << 'X';
			else
				cout << '.';
		}
		cout << '\n';
	}
}