#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> map(500, vector<int>(500));
vector<vector<int>> visit(500, vector<int>(500));
vector<vector<bool>> visited(500, vector<bool>(500));
int m, n;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
		}
	}
	visit[0][0] = 1;
	priority_queue<pair<int,pair<int,int>>> searching;
	if (map[0][1] < map[0][0]) {
		searching.push(make_pair(map[0][1],make_pair(0,1)));
		visit[0][1] = 1;
	}
	if (map[1][0] < map[0][0]) {
		searching.push(make_pair(map[1][0],make_pair(1,0)));
		visit[1][0] = 1;
	}
	int h = map[0][0];
	while (!searching.empty() && h > map[m - 1][n - 1]) {
		h = searching.top().first;
		int u = searching.top().second.first;
		int v = searching.top().second.second;
		if (!visited[u][v]) {
			if (u > 0) {
				if (h > map[u - 1][v]) {
					visit[u - 1][v] += visit[u][v];
					searching.push(make_pair(map[u - 1][v], make_pair(u - 1, v)));
				}
			}
			//down
			if (u < m - 1) {
				if (h > map[u + 1][v]) {
					visit[u + 1][v] += visit[u][v];
					searching.push(make_pair(map[u + 1][v], make_pair(u + 1, v)));
				}
			}
			//left
			if (v > 0) {
				if (h > map[u][v - 1]) {
					visit[u][v - 1] += visit[u][v];
					searching.push(make_pair(map[u][v - 1], make_pair(u, v - 1)));
				}
			}
			//right
			if (v < n - 1) {
				if (h > map[u][v + 1]) {
					visit[u][v + 1] += visit[u][v];
					searching.push(make_pair(map[u][v + 1], make_pair(u, v + 1)));
				}
			}
		}
		visited[u][v] = true;
		searching.pop();
	}
	cout << visit[m - 1][n - 1];
}