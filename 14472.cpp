#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	bool map[100][100];
	int n, m, d;
	cin >> n >> m >> d;
	char area;
	for (int i = 0; i < n; i++) {
		area = cin.get();
		for (int j = 0; j < m; j++) {
			area = cin.get();
			if (area == '.') {
				map[i][j] = true;
			}
			else {
				map[i][j] = false;
			}
		}
	}
	int answer = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m - d + 1; j++) {
			bool avail = true;
			for (int k = 0; k < d; k++) {
				if (!map[i][j + k]) {
					avail = false;
				}
			}
			if (avail) {
				answer++;
			}
		}
	}
	for (int i = 0; i < n - d + 1; i++) {
		for (int j = 0; j < m; j++) {
			bool avail = true;
			for (int k = 0; k < d; k++) {
				if (!map[i + k][j]) {
					avail = false;
				}
			}
			if (avail) {
				answer++;
			}
		}
	}
	cout << answer;
}