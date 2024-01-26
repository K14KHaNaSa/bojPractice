#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, s;
	int l = 0;
	int r = 0;
	int ans = 0;
	cin >> n;
	while(n--){
		cin >> s;
		if (s == 1) {
			l++;
			r--;
		}
		if (s == 2) {
			r++;
			l--;
		}
		if (l < 0)
			l = 0;
		if (r < 0)
			r = 0;
		ans = max(ans, max(l, r));
	}
	cout << ans;
}