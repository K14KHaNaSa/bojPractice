#include <iostream>
using namespace std;


int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	int cau[8];
	int b[8];
	int a[16];
	for (int i = 0; i < 8; i++) {
		n = cin.get();
		cau[i] = n - 48;
	}
	n = cin.get();
	for (int i = 0; i < 8; i++) {
		n = cin.get();
		b[i] = n - 48;
	}

	for (int i = 0; i < 16; i++) {
		if (i % 2 == 0) {
			a[i] = cau[i / 2];
		}
		else {
			a[i] = b[i / 2];
		}
	}
	for (int j = 15; j > 1; j--) {
		for (int i = 0; i < j; i++) {
			a[i] = (a[i] + a[i + 1]) % 10;
		}
	}
	cout << a[0] << a[1];
}