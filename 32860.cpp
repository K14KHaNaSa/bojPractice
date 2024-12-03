#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	cout << "SN " << n;
	if (m < 27)
		cout << char('A' + m - 1);
	else
		cout << char('a' - 1 + (m - 1) / 26) << char('a' + (m - 1) % 26);
}