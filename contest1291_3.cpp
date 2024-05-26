#include <iostream>
using namespace std;

int n;
char m[100][100];

int mobis(char mm, char o, char b, char i, char s) {
	if (mm == 'M' && o == 'O' && b == 'B' && i == 'I' && s == 'S')
		return 1;
	else
		return 0;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int ans = 0;
	char c;
	cin >> n;
	for (int i = 0; i < n; i++) {
		c = cin.get();
		for (int j = 0; j < n; j++) {
			c = cin.get();
			m[i][j] = c;
		}
	}
	if (n < 4) {
		cout << 0;
		return 0;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i > 3)	// 0h
				ans += mobis(m[i][j], m[i - 1][j], m[i - 2][j], m[i - 3][j], m[i - 4][j]);
			if (i > 3 && j < n - 4) // 1h
				ans += mobis(m[i][j], m[i - 1][j + 1], m[i - 2][j + 2], m[i - 3][j + 3], m[i - 4][j + 4]);
			if (j < n - 4) // 3h
				ans += mobis(m[i][j], m[i][j + 1], m[i][j + 2], m[i][j + 3], m[i][j + 4]);
			if (i < n - 4 && j < n - 4) // 5h
				ans += mobis(m[i][j], m[i + 1][j + 1], m[i + 2][j + 2], m[i + 3][j + 3], m[i + 4][j + 4]);
			if (i < n - 4) // 6h
				ans += mobis(m[i][j], m[i + 1][j], m[i + 2][j], m[i + 3][j], m[i + 4][j]);
			if (i < n - 4 && j > 3) // 7h
				ans += mobis(m[i][j], m[i + 1][j - 1], m[i + 2][j - 2], m[i + 3][j - 3], m[i + 4][j - 4]);
			if (j > 3) // 9h
				ans += mobis(m[i][j], m[i][j - 1], m[i][j - 2], m[i][j - 3], m[i][j - 4]);
			if (i > 3 && j > 3) // 11h
				ans += mobis(m[i][j], m[i - 1][j - 1], m[i - 2][j - 2], m[i - 3][j - 3], m[i - 4][j - 4]);
		}
	}
	cout << ans;
}