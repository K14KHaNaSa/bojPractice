#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	int even = 0;
	int odd = 0;
	cin >> n;
	k = cin.get();
	while (n--) {
		k = cin.get();
		if (k % 2 == 0)
			even++;
		else
			odd++;
	}
	(even == odd) ? cout << -1 : (even > odd ? cout << 0 : cout << 1);
}