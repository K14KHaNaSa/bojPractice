#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, t;
	int ans = 0;
	int pt;
	cin >> n >> t;
	while (n--) {
		cin >> pt;
		t -= pt;
		if (t >= 0)
			ans++;
	}
	cout << ans;
}