#include <iostream>
#include <queue>
using namespace std;

int n, m, x, c;
int area[100][100];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cin >> area[i][j];
	}
	c = area[0][0]; // touchstone color
	area[0][0] = 2; // 2 = avail
	cin >> x;
	queue<pair<int, int>> move;
	move.push(make_pair(0, 0));
	while (!move.empty()) {
		int u = move.front().first;
		int v = move.front().second;
		move.pop();
		for (int i = max(0, u - x); i < min(n, u + x + 1); i++) {
			for (int j = max(0, v - x + max(i - u, u - i)); j < min(m, v + x - max(i - u, u - i) + 1); j++) {
				if (area[i][j] == c) {
					area[i][j] = 2;
					move.push(make_pair(i, j));
				}
			}
		}
	}
	area[n - 1][m - 1] == 2 ? cout << "ALIVE" : cout << "DEAD";
}