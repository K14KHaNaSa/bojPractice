#include <iostream>
using namespace std;

int a(int l, int r) { // abs
	return max(l - r, r - l);
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int q, w, e, r;
	cin >> q >> w >> e >> r;
	int ans = min(min(a(a(q, w), a(e, r)), a(a(q, e), a(w, r))), a(a(q, r), a(w, e)));
	ans = min(ans, a(q + w + e, r)), min(a(q + w + r, e), a(q + e + r, w));
	cout << min(ans, a(w + e + r, q));
}