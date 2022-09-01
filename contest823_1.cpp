#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	unsigned long long int n, m, a, k;
	cin >> n >> m >> a >> k;
	cout << min(a - k + 1, n) <<" ";
	if ((a - k) % m != 0) {
		cout << (a - k) / m + 2;
	}
	else {
		cout << (a - k) / m + 1;
	}
}