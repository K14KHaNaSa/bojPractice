#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, step;
	cin >> n;
	vector<vector<int>> map(n, vector<int>(n, 0));
	map[0][0] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> step;
			if (map[i][j] == 1) {
				if (j + step < n) {
					map[i][j + step] = 1;
				}
				if (i + step < n) {
					map[i + step][j] = 1;
				}
			}
		}
	}
	if (map[n - 1][n - 1] == 1) {
		cout << "HaruHaru";
	}
	else {
		cout << "Hing";
	}
}