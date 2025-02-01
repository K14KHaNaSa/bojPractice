#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	int hm = (m * 24 * 60) / n;
	if (hm / 60 < 10)
		cout << 0;
	cout << hm / 60 << ':';
	if (hm % 60 < 10)
		cout << 0;
	cout << hm % 60;
}