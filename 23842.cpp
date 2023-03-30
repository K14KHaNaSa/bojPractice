#include <iostream>
using namespace std;

int num[10] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	bool able = false;
	if (n > 11) {
		n -= 4;
		for (int a = 0; a < 10; a++) {
			for (int b = 0; b < 10; b++) {
				for (int c = 0; c < 10; c++) {
					for (int d = 0; d < 10; d++) {
						for (int e = 0; e < 10; e++) {
							for (int f = 0; f < 10; f++) {
								if ((a + c) * 10 + b + d == e * 10 + f &&
									num[a] + num[b] + num[c] + num[d] + num[e] + num[f] == n &&
									!able) {
									cout << a << b << "+" << c << d << "=" << e << f;
									able = true;
									break;
								}
							}
						}
					}
				}
			}
		}
	}
	if (!able) {
		cout << "impossible";
	}
}