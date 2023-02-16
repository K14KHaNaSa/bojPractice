#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int l, p, v;
	int tcount = 1;
	cin >> l >> p >> v;
	while (!(l == 0 && p == 0 && v == 0)) {
		cout << "Case " << tcount << ": " << (v / p) * l + min((v % p), l) << "\n";
		tcount++;
		cin >> l >> p >> v;
	}
}