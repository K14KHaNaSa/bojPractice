#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a1, a2, a3, b1, b2, b3, t1, t2, t3;
	int ans = 0;
	cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
	ans += min(a1, b1);
	ans += min(a2, b2);
	t1 = a1;
	t2 = a2;
	a1 = max(a1 - b1, 0);
	a2 = max(a2 - b2, 0);
	b1 = max(b1 - t1, 0);
	b2 = max(b2 - t2, 0);
	ans += min(a3, (b1 + b2));
	ans += min(b3, (a1 + a2));
	a3 = a3 - min(a3, (b1 + b2));
	b3 = b3 - min(b3, (a1 + a2));
	ans += min(a3, b3);
	cout << ans;
}