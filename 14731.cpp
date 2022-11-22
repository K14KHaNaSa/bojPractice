#include <iostream>
using namespace std;

unsigned long long int hang;

unsigned long long int zegop(int chasu) {
	unsigned long long int ch = chasu;
	unsigned long long int rtrn;
	if (ch == 1) {
		return 2;
	}
	else if (ch % 2 == 0) {
		rtrn = ((zegop(ch / 2) % 1000000007) * (zegop(ch / 2) % 1000000007)) % 1000000007;
		return rtrn;
	}
	else {
		rtrn = ((zegop(ch / 2) % 1000000007) * (zegop(ch / 2) % 1000000007) * 2) % 1000000007;
		return rtrn;
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	unsigned long long int n, c, k;
	unsigned long long int answer = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c >> k;
		hang = 1;
		if (k > 1) {
			hang = ((hang % 1000000007) * (zegop(k - 1) % 1000000007)) % 1000000007;
		}
		answer += ((hang % 1000000007) * (c % 1000000007) * (k % 1000000007)) % 1000000007;
	}
	cout << answer % 1000000007;
}