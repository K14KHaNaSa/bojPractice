#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int q, ta, tb, va, vb;
	cin >> q;
	while (q--) {
		cin >> ta >> tb >> va >> vb;
		int a = 0;
		int b = tb * vb;
		while (va > 0) {
			a += ta;
			va--;
			if (va > 0 && a > b) {
				b += ta;
				va--;
			}
		}
		cout << max(a, b) << "\n";
	}
}