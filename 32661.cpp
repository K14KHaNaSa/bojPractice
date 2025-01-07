#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, p;
	int mn = 100001;
	int mx = 0;
	cin >> n;
	while (n--) {
		cin >> p;
		mn = min(mn, p);
		mx = max(mx, p);
	}
	cout << max(0, mn - (mx / 2));
}