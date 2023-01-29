#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, k;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> k;
		cout << k * 23 << "\n";
	}
}