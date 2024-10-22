#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int w, h, n, a, b;
	cin >> w >> h >> n >> a >> b;
	int ans = 0;
	if (w < a || h < b)
		cout << -1;
	else {
		int cpp = (w / a) * (h / b); // char per page
		(n % cpp > 0) ? cout << n / cpp + 1 : cout << n / cpp;
	}
}