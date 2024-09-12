#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int p, c, n;
	int h[100];
	cin >> p;
	for (int i = 10; i < 100; i++)
		h[i] = -1;
	for (int i = 0; i < p; i++) {
		cin >> c;
		while (c--) {
			cin >> n;
			h[n] = i;
		}
	}
	for (int i = 10; i < 100; i++) {
		if (h[i] > -1)
			cout << char(h[i] + 'A');
	}
}