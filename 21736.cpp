#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;
int p = 0;
int campus[600][600];
queue<pair<int, int>> bfs;
// O = 0 / X = 9 / P = 1
void q(int a, int b) {
	if (campus[a][b] != 9) {
		if (campus[a][b] == 1) {
			p++;
		}
		bfs.push(make_pair(a, b));
		campus[a][b] = 9;
	}
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	char info;
	for (int i = 0; i < n; i++) {
		info = cin.get();
		for (int j = 0; j < m; j++) {
			info = cin.get();
			if (info == 'O') {
				campus[i][j] = 0;
			}
			else if (info == 'I') {
				campus[i][j] = 0;
				bfs.push(make_pair(i, j));
			}
			else if (info == 'P') {
				campus[i][j] = 1;
			}
			else if (info == 'X') {
				campus[i][j] = 9;
			}
		}
	}
	while (!bfs.empty()) {
		int u = bfs.front().first;
		int v = bfs.front().second;
		bfs.pop();
		if (u > 0) {
			q(u - 1, v);
		}
		if (u < n - 1) {
			q(u + 1, v);
		}
		if (v > 0) {
			q(u, v - 1);
		}
		if (v < m - 1) {
			q(u, v + 1);
		}
	}
	if (p > 0) {
		cout << p;
	}
	else {
		cout << "TT";
	}
}