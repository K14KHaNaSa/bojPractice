#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long int n, b, sum;
	cin >> n;
	sum = 0;
	for (int i = 1; i <= n; i++) {
		cin >> b;
		cout << b * i - sum << ' ';
		sum = b * i;
	}
}