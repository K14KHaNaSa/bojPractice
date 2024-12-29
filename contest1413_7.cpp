#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int abcd;
	int ans = 0;
	for (int i = 0; i < 4; i++) {
		cin >> abcd;
		ans += abcd;
	}
	cout << ((ans - 2) % 4) + 1;
}