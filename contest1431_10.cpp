#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	cout << (n * 2) - 1 << '\n';
	cout << "1 " << n << " 1 1\n";
	int r = 0;
	int nxt = n + 1;
	int lv = 2;
	for (int i = n; i > 1; i--) {
		cout << nxt << ' ' << nxt + r << ' ' << lv << ' ' << i << '\n';
		r++;
		nxt += r;
		cout << nxt << ' ' << nxt + (n - r) - 1 << ' ' << lv << " 1" << '\n';
		nxt += (n - r);
		lv++;
	}
}