#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	double n, k, r;
	cin >> n >> k;
	double sum = 0;
	for (int i = 0; i < k; i++) {
		cin >> r;
		sum += r;
	}
	cout << ((n - k) * -3 + sum) / n << " " << ((n - k) * 3 + sum) / n;
}