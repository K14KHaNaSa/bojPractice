#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, i, j, x, y, ans;
	char c;
	char a[1000][1000];
	cin >> n;
	for (i = 0; i < n; i++) {
		c = cin.get(); // \n
		for (j = 0; j < n; j++)
			a[i][j] = cin.get();
	}
	for (i = 1; i < n; i++) {
		for (j = 1; j < n; j++) {
			if (a[i][j] == '*') {
				if (a[i - 1][j] == '*' && a[i + 1][j] == '*' &&
					a[i][j - 1] == '*' && a[i][j + 1] == '*') {
					x = i;
					y = j;
					break;
				}
			}
		}
	}
	ans = 0;
	cout << x + 1 << ' ' << y + 1 << '\n';
	for (j = y - 1; j >= 0; j--) {
		if (a[x][j] == '*')
			ans++;
		else
			break;
	}
	cout << ans << ' ';
	ans = 0;
	for (j = y + 1; j < n; j++) {
		if (a[x][j] == '*')
			ans++;
		else
			break;
	}
	cout << ans << ' ';
	ans = 0;
	for (i = x + 1; i < n; i++) {
		if (a[i][y] == '*')
			ans++;
		else
			break;
	}
	cout << ans << ' ';
	x += ans + 1;
	ans = 0;
	for (i = x; i < n; i++) {
		if (a[i][y - 1] == '*')
			ans++;
		else
			break;
	}
	cout << ans << ' ';
	ans = 0;
	for (i = x; i < n; i++) {
		if (a[i][y + 1] == '*')
			ans++;
		else
			break;
	}
	cout << ans;
}