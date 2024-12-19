#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, w, l, h, a, m, sf;
	cin >> n >> w >> l >> h >> a >> m;
	while (n + w + l + h + a + m > 0) {
		sf = (w * l);
		sf += (w * h) * 2;
		sf += (h * l) * 2;
		while (m--) {
			cin >> w >> h;
			sf -= w * h;
		}
		sf *= n;
		(sf % a == 0) ? cout << sf / a << '\n' : cout << (sf / a) + 1 << '\n';
		cin >> n >> w >> l >> h >> a >> m;
	}
}