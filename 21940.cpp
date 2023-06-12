#include <iostream>
#include <queue>
using namespace std;

int map[200][200];
int c[200];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, a, b, t, k;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			map[i][j] = 2000000001;
		}
	}
	while (m--) {
		cin >> a >> b >> t;
		map[a - 1][b - 1] = min(map[a - 1][b - 1], t);
	}
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (map[i][k] < 2000000001 && map[k][j] < 2000000001) {
					map[i][j] = min(map[i][j], map[i][k] + map[k][j]);
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		map[i][i] = 0;
	}
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> c[i];
	}
	queue<int> ansq;
	int travel = 2000000001;
	for (int i = 0; i < n; i++) {
		int maxd = 0;
		for (int j = 0; j < k; j++) {
			maxd = max(maxd, map[c[j] - 1][i] + map[i][c[j] - 1]);
		}
		if (maxd == travel) {
			ansq.push(i + 1);
		}
		else if (maxd < travel) {
			travel = maxd;
			if (!ansq.empty()) {
				ansq = {};
			}
			ansq.push(i + 1);
		}
	}
	while (!ansq.empty()) {
		cout << ansq.front() << " ";
		ansq.pop();
	}
}