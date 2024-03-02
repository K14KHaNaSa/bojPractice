#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, X, Y, x, y;
	int choco[50][50];
	cin >> t;
	while (t--) {
		cin >> X >> Y >> x >> y;
		int ans = 0;
		for (int i = 0; i < X; i++) {
			for (int j = 0; j < Y; j++)
				choco[i][j] = false;
		}
		for (int i = 0; i < X; i++) {
			for (int j = 0; j < Y; j++) {
				if (!choco[i][j]) {
					ans++;
					if (i + x < X && j + y < Y)
						choco[i + x][j + y] = true;
				}
			}
		}
		cout << ans << "\n";
	}
}