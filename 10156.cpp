#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	int k, n, m;
	cin >> k >> n >> m;
	if (k * n > m) {
		cout << k * n - m;
	}
	else {
		cout << 0;
	}
}