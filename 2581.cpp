#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	int m, n, sum, min;
	sum = 0;
	min = 10000;
	cin >> m >> n;
	for (int i = m; i <= n; i++) {
		if (i == 2) {
			sum += i;
			if (i < min) {
				min = i;
			}
		}
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				break;
			}
			else if (j == (i - 1)) {
				sum += i;
				if (i < min) {
					min = i;
				}
			}
		}
	}
	if (min == 10000) {
		cout << -1;
	}
	else {
		cout << sum << "\n" << min;
	}
}