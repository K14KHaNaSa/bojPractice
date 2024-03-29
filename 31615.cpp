#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b;
	int ans = 0;
	cin >> a >> b;
	a += b;
	while (a > 0) {
		a /= 10;
		ans++;
	}
	cout << ans;
}