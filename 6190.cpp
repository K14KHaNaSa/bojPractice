#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long int n, ans;
	cin >> n;
	ans = 0;
	while (n > 1) {
		if (n % 2 == 0)
			n /= 2;
		else
			n = n * 3 + 1;
		ans++;
	}
	cout << ans;
}