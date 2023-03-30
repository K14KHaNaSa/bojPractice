#include <iostream>
using namespace std;

int n, r;
int map[250][250] = { 0, };

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> r;
	int zeroone;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> zeroone;
			if (zeroone > 0) {
				for (int u = max(0, i - r); u < min(i + r + 1, n); u++) {
					for (int v = max(0, j - r); v < min(j + r + 1, n); v++) {
						map[u][v]++;
					}
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << map[i][j] << " ";
		}
		cout << "\n";
	}
}