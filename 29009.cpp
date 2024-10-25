#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, a, b;
	cin >> n >> a >> b;
	int c_x = n / 2;
	int c_y = n / 2;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (max(c_x - i, i - c_x) >= a && max(c_y - j, j - c_y) >= b)
				ans++;
		}
	}
	cout << max(ans - 1, 0);
}