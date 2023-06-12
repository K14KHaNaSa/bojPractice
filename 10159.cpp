#include <iostream>
using namespace std;

int n;
bool obj[100][100]; // before -> after

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int k, a, b;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			obj[i][j] = false;
		}
	}
	while (k--) {
		cin >> a >> b;
		obj[a - 1][b - 1] = true;
	}
	for (k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (obj[i][k] && obj[k][j]) {
					obj[i][j] = true;
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		int answer = 0;
		for (int j = 0; j < n; j++) {
			if (i != j) {
				if (!obj[i][j] && !obj[j][i]) {
					answer++;
				}
			}
		}
		cout << answer << "\n";
	}
}