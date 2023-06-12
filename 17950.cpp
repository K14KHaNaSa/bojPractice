#include <iostream>
#include <cmath>
using namespace std;

long long int p(int hei, int xx) {
	if (hei == 1) {
		return xx;
	}
	else if (hei % 2 == 0) {
		long long int h = p(hei / 2, xx);
		return (h * h) % 1000000007;
	}
	else {
		long long int h = p(hei / 2, xx);
		return (((h * h) % 1000000007) * xx) % 1000000007;
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long int h, x, n;
	cin >> h >> x;
	long long int answer = 0;
	for (long long int i = 1; i <= h; i++) {
		cin >> n;
		answer = (answer + p(i, x) * n) % 1000000007;
	}
	cout << answer;
}