#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, m, i;
	cin >> t;
	for (i = 1; i <= t; i++) {
		cin >> n >> m;
		cout << "Case " << i << ": " << m - n + 1 << '\n';
	}
}