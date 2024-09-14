#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, th;
	cin >> n;
	int ans = (n - 1) * 180;
	while (n--) {
		cin >> th;
		ans -= th * 2;
	}
	cout << ans;
}