#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, i, j;
	string ad[5];
	string no[5];
	cin >> n >> m;
	for (i = 0; i < n; i++)
		cin >> ad[i];
	for (i = 0; i < m; i++)
		cin >> no[i];
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++)
			cout << ad[i] << " as " << no[j] << "\n";
	}
}