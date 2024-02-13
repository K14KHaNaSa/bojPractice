#include <iostream>
#include <queue>
using namespace std;

int visited[500][500];
int map[500][500];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	queue<pair<int, int>> move; // u, v
	int n, m;
	char s;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		s = cin.get();
		for (int j = 0; j < m; j++) {
			s = cin.get();
			map[i][j] = int(s) - int('0');
			visited[i][j] = -1;
		}
	}
	move.push(make_pair(0, 0));
	visited[0][0] = 0;
	while (!move.empty() && visited[n - 1][m - 1] < 0) {
		int u = move.front().first;
		int v = move.front().second;
		int area = map[u][v];
		int mv = visited[u][v];
		move.pop();
		if (u - area >= 0) {
			if (visited[u - area][v] < 0) {
				visited[u - area][v] = true;
				move.push(make_pair(u - area, v));
				visited[u - area][v] = mv + 1;
			}
		}
		if (u + area < n) {
			if (visited[u + area][v] < 0) {
				visited[u + area][v] = true;
				move.push(make_pair(u + area, v));
				visited[u + area][v] = mv + 1;
			}
		}
		if (v - area >= 0) {
			if (visited[u][v - area] < 0) {
				visited[u][v - area] = true;
				move.push(make_pair(u, v - area));
				visited[u][v - area] = mv + 1;
			}
		}
		if (v + area < m) {
			if (visited[u][v + area] < 0) {
				visited[u][v + area] = true;
				move.push(make_pair(u, v + area));
				visited[u][v + area] = mv + 1;
			}
		}
	}
	visited[n - 1][m - 1] < 0 ? cout << "IMPOSSIBLE" : cout << visited[n - 1][m - 1];
}