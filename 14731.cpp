#include <iostream>
using namespace std;

typedef unsigned long long int ull;
ull MOD = 1000000007;
ull c, k;
ull answer = 0;

ull zegop(ull ch) {
	if (ch == 0) {
		return 1;
	}
	else if (ch == 1) {
		return 2;
	}
	else {
		ull halfch = zegop(ch / 2);
		if (ch % 2 == 0) {
			return (halfch * halfch) % MOD;
		}
		else {
			return (halfch * halfch * 2) % MOD;
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c >> k;
		if (k > 0) {
			answer = (answer + zegop(k - 1) * (c * k % MOD)) % MOD;
		}
	}
	cout << answer % MOD;
}