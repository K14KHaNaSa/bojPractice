#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int q, a;
	int t[32];
	bool ok;
	t[0] = 1;
	for (int i = 1; i < 32; i++)
		t[i] = t[i - 1] * 2;
	cin >> q;
	while (q--) {
		cin >> a;
		ok = false;
		for (int i = 0; i < 32; i++) {
			if (t[i] == a) {
				ok = true;
				break;
			}
			else if (t[i] > a)
				break;
		}
		ok ? cout << "1\n" : cout << "0\n";
	}
}