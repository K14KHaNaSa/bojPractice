#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b, c;
	cin >> a >> b >> c;
	for (int i = 1; i <= 10; i++) {
		bool exist = false;
		for (int j = 1; j <= 10; j++) {
			if (i * a + j * b == c) {
				cout << j << " ";
				exist = true;
			}
		}
		if (!exist)
			cout << 0;
		cout << '\n';
	}
}