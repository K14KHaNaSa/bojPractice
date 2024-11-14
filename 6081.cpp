#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int s[501];
	int n, q, h, sj, ej;
	cin >> n >> q;
	s[0] = 0;
	for (int i = 1; i <= n; i++) {
		cin >> h;
		s[i] = s[i - 1] + h;
	}
	while (q--) {
		cin >> sj >> ej;
		cout << s[ej] - s[sj - 1] << '\n';
	}
}