#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	unsigned long long int n, m, ans;
	cin >> n >> m;
	if (n < m || n % m>0) {
		ans = 1;
		while (n > 1 && ans > 0) {
			if (n % m == 0) {
				cout << 0;
				return 0;
			}
			ans = ((n % m) * ans) % m;
			n--;
		}
		cout << ans;
	}
	else
		cout << 0;
}