#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b, c, m, i;
	int t = 0;
	int w = 0;
	cin >> a >> b >> c >> m;
	for (i = 0; i < 24; i++) {
		if (t + a > m) // rest
			t = max(0, t - c);
		else { // work
			w += b;
			t += a;
		}
	}
	cout << w;
}