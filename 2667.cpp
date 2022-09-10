#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int n, danjisu;
bool area[25][25] = { false };

bool dfs(int x, int y) {
	if (x < 0 || x >= n || y < 0 || y >= n) {
		return false;
	}
	area[x][y] = false;
	danjisu++;
	if (area[x - 1][y]) {
		dfs(x - 1, y);
	}
	if (area[x][y - 1]) {
		dfs(x, y - 1);
	}
	if (area[x + 1][y]) {
		dfs(x + 1, y);
	}
	if (area[x][y + 1]) {
		dfs(x, y + 1);
	}
	return false;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int apt, dong;
	vector<int> danji;
	cin >> n;
	dong = 0;
	apt = cin.get();
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			apt = cin.get();
			if (apt == 49) {
				area[i][j] = true;
			}
		}
		apt = cin.get();
	}
	for (int ii = 0; ii < n; ii++) {
		for (int iii = 0; iii < n; iii++) {
			danjisu = 0;
			if (area[ii][iii] == true) {
				dfs(ii, iii);
				dong++;
				danji.push_back(danjisu);
			}
		}
	}
	cout << dong << "\n";
	sort(danji.begin(), danji.end());
	for (int i = 0; i < dong; i++) {
		cout << danji[i] << "\n";
	}
}