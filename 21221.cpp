#include <iostream>
using namespace std;

void ps(void) {
	cout << '#';
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, i, j;
	char l[101][101];
	char a;
	cin >> n >> m;
	for (i = 0; i < n; i++)
		l[i][0] = '.';
	for (j = 0; j < m; j++)
		l[0][j] = '.';
	for (i = 1; i <= n; i++) {
		a = cin.get(); // \n
		for (j = 1; j <= m; j++) {
			a = cin.get();
			l[i][j] = a;
		}
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			if (l[i][j] == '#')
				ps();
			else if (l[i - 1][j] == '#')
				ps();
			else if (l[i][j - 1] == '#')
				ps();
			else if (l[i - 1][j - 1] == '#')
				ps();
			else
				cout << '.';
		}
		cout << '\n';
	}
}