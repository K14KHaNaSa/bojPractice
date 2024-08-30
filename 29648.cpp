#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long int a, b, s, i, j;
	cin >> a >> b >> s;
	for (i = 1; i <= s; i++) {
		if (s % i == 0) {
			j = s / i;
			if (i + a == j + b) {
				cout << i + a;
				return 0;
			}
		}
	}
	cout << -1;
}