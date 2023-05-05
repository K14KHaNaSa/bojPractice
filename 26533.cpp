#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	char mtype;
	cin >> n;
	vector<vector<bool>> map(n, vector<bool>(n, false));
	for (int i = 0; i < n; i++) {
		mtype = cin.get();
		for (int j = 0; j < n; j++) {
			mtype = cin.get();
			if (mtype == '.') {
				map[i][j] = true;
			}
		}
	}
	queue<pair<int, int>> move;
	if (map[0][0]) {
		move.push(make_pair(0, 0));
	}
	bool answer = false;
	while (!move.empty()) {
		int u = move.front().first;
		int v = move.front().second;
		move.pop();
		if (u == n - 1 && v == n - 1) {
			answer = true;
		}
		if (u < n - 1) {
			if (map[u + 1][v]) {
				map[u + 1][v] = false;
				move.push(make_pair(u + 1, v));
			}
		}
		if (v < n - 1) {
			if (map[u][v + 1]) {
				map[u][v + 1] = false;
				move.push(make_pair(u, v + 1));
			}
		}
	}
	if (answer) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
}