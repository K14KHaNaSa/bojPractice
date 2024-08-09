#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int c;
	cin >> c;
	int ans = 1;
	while (c != 1) {
		if (c % 2 == 0)
			c /= 2;
		else
			c = c * 3 + 1;
		ans++;
	}
	cout << ans;
}