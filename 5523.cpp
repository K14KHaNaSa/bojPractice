#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, as, bs, aw = 0, bw = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> as >> bs;
		if (as > bs) {
			aw++;
		}
		if (bs > as) {
			bw++;
		}
	}
	cout << aw << " " << bw;
}