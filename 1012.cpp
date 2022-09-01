#include <iostream>
using namespace std;

int m, n;
bool cabbage[50][50] = { false };
bool checker[50][50] = { false };

bool dfs(int x, int y) {
	if (x < 0 || x >= m || y < 0 || y >= n) {
		return false;
	}
	cabbage[x][y] = false;
	if (cabbage[x-1][y]) {
		dfs(x-1,y);
	}
	if (cabbage[x][y - 1]) {
		dfs(x, y - 1);
	}
	if (cabbage[x + 1][y]) {
		dfs(x + 1, y);
	}
	if (cabbage[x][y + 1]) {
		dfs(x, y + 1);
	}
	return false;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t, k, mt, nt, grung;
	cin >> t;
	grung = 0;
	for (int j = 0; j < t; j++) {
		cin >> m >> n >> k;
		grung = 0;
		for (int i = 0; i < k; i++) {
			cin >> mt >> nt;
			cabbage[mt][nt] = true;
		}
		for (int ii = 0; ii < m; ii++) {
			for (int iii = 0; iii < n; iii++) {
				if (cabbage[ii][iii] == true) {
					dfs(ii, iii);
					grung++;
				}
			}
		}
		cout << grung << "\n";
		for (int ii = 0; ii < m; ii++) {
			for (int iii = 0; iii < n; iii++) {
				cabbage[ii][iii] = false;
			}
		}
	}
}