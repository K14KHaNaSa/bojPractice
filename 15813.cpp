#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int ans = 0;
	int l;
	char n;
	cin >> l;
	n = cin.get();
	while (l--) {
		n = cin.get();
		ans += (int(n) - int('A') + 1);
	}
	cout << ans;
}