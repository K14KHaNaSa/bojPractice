#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	cin >> n >> k;
	n--;
	while (n > 0 && k > 0) {
		k = k >> 1;
		n--;
	}
	cout << k;
}