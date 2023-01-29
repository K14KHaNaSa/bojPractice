#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	int tc = 1;
	cin >> n;
	while (n != 0) {
		vector<vector<int>> map(n, vector<int>(n));
		vector<vector<int>> lost(n, vector<int>(n, 1000000000));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> map[i][j];
			}
		}
		lost[0][0] = map[0][0];
		queue<pair<int, int>> move;
		move.push(make_pair(0, 0));
		while (!move.empty()) {
			int u = move.front().first;
			int v = move.front().second;
			move.pop();
			if (u > 0) {
				if (lost[u - 1][v] > lost[u][v] + map[u - 1][v]) {
					lost[u - 1][v] = lost[u][v] + map[u - 1][v];
					move.push(make_pair(u - 1, v));
				}
			}
			if (u < n - 1) {
				if (lost[u + 1][v] > lost[u][v] + map[u + 1][v]) {
					lost[u + 1][v] = lost[u][v] + map[u + 1][v];
					move.push(make_pair(u + 1, v));
				}
			}
			if (v > 0) {
				if (lost[u][v - 1] > lost[u][v] + map[u][v - 1]) {
					lost[u][v - 1] = lost[u][v] + map[u][v - 1];
					move.push(make_pair(u, v - 1));
				}
			}
			if (v < n - 1) {
				if (lost[u][v + 1] > lost[u][v] + map[u][v + 1]) {
					lost[u][v + 1] = lost[u][v] + map[u][v + 1];
					move.push(make_pair(u, v + 1));
				}
			}
		}
		cout << "Problem " << tc << ": " << lost[n - 1][n - 1] << "\n";
		tc++;
		cin >> n;
	}
}