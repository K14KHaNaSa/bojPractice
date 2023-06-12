#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, q;
	cin >> n;
	double sm = 0;
	for (int i = 0; i < n; i++) {
		cin >> q;
		if (q < 100) {
			if (q > 9) {
				if (q / 10 == 0 || q / 10 == 6 || q / 10 == 9) {
					q = q % 10 + 90;
				}
			}
			if (q % 10 == 0 || q % 10 == 6 || q % 10 == 9) {
				q = (q / 10) * 10 + 9;
			}
		}
		sm += q;
	}
	cout << round(sm / n);
}