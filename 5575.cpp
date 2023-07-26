#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int h, m, s;
	int ans;
	for (int i = 0; i < 3; i++) {
		cin >> h >> m >> s;
		ans = 3600 * h + 60 * m + s;
		cin >> h >> m >> s;
		ans -= 3600 * h + 60 * m + s;
		ans = -1 * ans;
		cout << ans / 3600 << " " << (ans % 3600) / 60 << " " << ans % 60 << "\n";
	}
}