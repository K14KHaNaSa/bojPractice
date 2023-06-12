#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, x, s, e, t;
	cin >> n >> m >> x;
	vector<vector<int>> movetime(n, vector<int>(n, 2000000001));
	vector<vector<bool>> visit(n, vector<bool>(n));
	for (int i = 0; i < m; i++) {
		cin >> s >> e >> t;
		movetime[s - 1][e - 1] = t;
		visit[s - 1][e - 1] = true;
	}
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (visit[i][k] && visit[k][j]) {
					movetime[i][j] = min(movetime[i][j], movetime[i][k] + movetime[k][j]);
					visit[i][j] = true;
				}
			}
		}
	}
	int answer = 0;
	for (int i = 0; i < n; i++) {
		if (i != x - 1) {
			answer = max(answer, movetime[i][x - 1] + movetime[x - 1][i]);
		}
	}
	cout << answer;
}