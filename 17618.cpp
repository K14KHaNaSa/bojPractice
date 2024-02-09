#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, dn, sum;
	cin >> n;
	int ans = 0;
	for (int i = n; i > 0; i--) {
		dn = i;
		sum = 0;
		while (dn > 0) {
			sum += dn % 10;
			dn /= 10;
		}
		if (i % sum == 0)
			ans++;
	}
	cout << ans;
}