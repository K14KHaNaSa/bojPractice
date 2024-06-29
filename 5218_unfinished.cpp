#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, i, ans;
	cin >> t;
	char x[21];
	char y;
	y = cin.get();
	while (t--) {
		for (i = 0; i < 21; i++) {
			y = cin.get();
			x[i] = y;
			if (y == ' ')
				break;
		}
		cout << "Distances: ";
		for (int j = 0; j < i; j++) {
			y = cin.get();
			if (x[i] > y)
				ans = 26 + int(x[j] - y);
			else
				ans = int(y - x[j]);
			if (ans < 0)
				ans += 26;
			cout << ans << ' ';
		}
		cout << '\n';
		y = cin.get();
	}
}