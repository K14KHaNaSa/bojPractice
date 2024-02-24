#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int p, i, ans;
	cin >> p;
	while (p--) {
		cin >> i;
		ans = i * i;
		while (i-- && i > 0)
			ans += i * i;
		cout << ans << "\n";
	}
}