#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, maxtrash;
vector<vector<int>> road(102, vector<int>(102));

void trash(int i, int j) {
	queue<pair<int, int>> mte;
	mte.push(make_pair(i, j));
	road[i][j] = 0;
	int trashsize = 1;
	while (!mte.empty()) {
		int r = mte.front().first;
		int c = mte.front().second;
		if (r > 1) {
			if (road[r - 1][c] != 0) {
				mte.push(make_pair(r - 1, c));
				road[r - 1][c] = 0;
				trashsize++;
			}
		}
		if (c > 1) {
			if (road[r][c - 1] != 0) {
				mte.push(make_pair(r, c - 1));
				road[r][c - 1] = 0;
				trashsize++;
			}
		}
		if (r < n) {
			if (road[r + 1][c] != 0) {
				mte.push(make_pair(r + 1, c));
				road[r + 1][c] = 0;
				trashsize++;
			}
		}
		if (c < m) {
			if (road[r][c + 1] != 0) {
				mte.push(make_pair(r, c + 1));
				road[r][c + 1] = 0;
				trashsize++;
			}
		}
		mte.pop();
	}
	maxtrash = max(maxtrash, trashsize);
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int k, tr, tc;
	cin >> n >> m >> k;
	if (k != 0) {
		for (int i = 0; i < k; i++) {
			cin >> tr >> tc;
			road[tr][tc]++;
		}
		maxtrash = 1;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				if (road[i][j] == 1) {
					trash(i, j);
				}
			}
		}
		cout << maxtrash;
	}
	else {
		cout << 0;
	}
}