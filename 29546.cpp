#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string f[1000];
	int n, m, l, r, i;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> f[i];
	cin >> m;
	while (m--) {
		cin >> l >> r;
		for (i = l - 1; i < r; i++)
			cout << f[i] << '\n';
	}
}