#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, p;
	cin >> n;
	int ans = 0;
	cin >> p;
	int pre = p;
	int start = p;
	n--;
	while (n--) {
		cin >> p;
		if (p > pre)
			ans = max(ans, p - start);
		else
			start = p;
		pre = p;
	}
	cout << ans;
}