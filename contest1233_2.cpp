#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long int n, a;
	cin >> n;
	long long int pre = -1;
	long long int combo = 0;
	long long int ans = 0;
	while (n--) {
		cin >> a;
		if (a > pre) {
			pre = a;
			combo++;
			ans += combo;
		}
		else {
			pre = a;
			combo = 1;
			ans++;
		}
	}
	cout << ans;
}