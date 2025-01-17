#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int bundle[20];
	int n, m;
	cin >> n >> m;
	int ans = 0;
	while (n > 0) {
		ans += n;
		n /= m;
	}
	cout << ans;
}