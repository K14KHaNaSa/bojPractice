#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m, x1, y1, x2, y2, ninput;
	vector<vector<int>> table(1025, vector<int>(1025));
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> ninput;
			table[i][j] = ninput + table[i - 1][j] + table[i][j - 1] - table[i - 1][j - 1];
		}
	}
	for (int i = 0; i < m; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		cout << table[x2][y2] - table[x1 - 1][y2] - table[x2][y1 - 1] + table[x1 - 1][y1 - 1] << "\n";
	}
}