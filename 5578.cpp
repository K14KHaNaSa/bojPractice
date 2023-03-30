#include <iostream>
using namespace std;

int n, m, answer;
bool map[90][90];

void icebreak(int u, int v, int depth) {
	answer = max(answer, depth);
	if (u > 0) {
		if (map[u - 1][v]) {
			map[u - 1][v] = false;
			icebreak(u - 1, v, depth + 1);
			map[u - 1][v] = true;
		}
	}
	if (u < n - 1) {
		if (map[u + 1][v]) {
			map[u + 1][v] = false;
			icebreak(u + 1, v, depth + 1);
			map[u + 1][v] = true;
		}
	}
	if (v > 0) {
		if (map[u][v - 1]) {
			map[u][v - 1] = false;
			icebreak(u, v - 1, depth + 1);
			map[u][v - 1] = true;
		}
	}
	if (v < m - 1) {
		if (map[u][v + 1]) {
			map[u][v + 1] = false;
			icebreak(u, v + 1, depth + 1);
			map[u][v + 1] = true;
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> m >> n;
	int ice;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> ice;
			if (ice == 1) {
				map[i][j] = true;
			}
		}
	}
	answer = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (map[i][j]) {
				map[i][j] = false;
				icebreak(i, j, 1);
				map[i][j] = true;
			}
		}
	}
	cout << answer;
}