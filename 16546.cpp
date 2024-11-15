#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 2^15 = 32768
	bool r[32768];
	int n, d;
	cin >> n;
	for (int i = 0; i < n; i++)
		r[i] = false;
	for (int i = 1; i < n; i++) {
		cin >> d;
		r[d - 1] = true;
	}
	for (int i = 0; i < n; i++) {
		if (!r[i]) {
			cout << i + 1;
			return 0;
		}
	}
}