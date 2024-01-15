#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int b[8];
	int c[8];
	int n;
	for (int i = 0; i < 8; i++) {
		cin >> b[i];
		c[i] = 0;
	}
	for (int i = 0; i < 7; i++) {
		cin >> n;
		c[n - 1]++;
	}
	for (int i = 0; i < 8; i++) {
		if (c[i] > 2)
			cout << i + 1 << "\n";
	}
	for (int i = 0; i < 4; i++) {
		if (c[b[i] - 1] > 1)
			cout << b[i] << " ";
	}
	for (int i = 4; i < 8; i++) {
		if (c[b[i] - 1] > 1)
			cout << b[i] << "\n";
	}
	for (int i = 0; i < 8; i++) {
		if (c[b[i] - 1] > 0)
			cout << b[i] << " ";
	}
}