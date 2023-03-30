#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, k;
int nextn[10][10]; // tree nourishment at winter
int energy[10][10]; // tree nourishment

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m >> k;
	vector<vector<vector<int>>> tree(n, vector<vector<int>>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> nextn[i][j];
			energy[i][j] = 5;
		}
	}
	int x, y, z;
	while (m--) {
		cin >> x >> y >> z;
		tree[x - 1][y - 1].push_back(z);
	}
	while (k--) {
		//spring && summer
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				vector<int> temp;
				int tempnour = 0;
				if (tree[i][j].size() > 0) {
					sort(tree[i][j].begin(), tree[i][j].end());
				}
				for (int a = 0; a < tree[i][j].size(); a++) {
					int nowtree = tree[i][j][a];
					if (nowtree <= energy[i][j]) { //spring action
						energy[i][j] -= nowtree;
						temp.push_back(nowtree + 1);
					}
					else { //summer action
						tempnour += nowtree / 2;
					}
				}
				tree[i][j].clear();
				while (!temp.empty()) {
					tree[i][j].push_back(temp.back());
					temp.pop_back();
				}
				energy[i][j] += tempnour;
			}
		}
		//autumn && winter
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				energy[i][j] += nextn[i][j]; // winter action
				for (int a = 0; a < tree[i][j].size(); a++) { // autumn action
					if (tree[i][j][a] % 5 == 0) {
						for (int u = max(0, i - 1); u <= min(i + 1, n - 1); u++) {
							for (int v = max(0, j - 1); v <= min(j + 1, n - 1); v++) {
								if (!(u == i && v == j)) {
									tree[u][v].push_back(1);
								}
							}
						}
					}
				}
			}
		}
	}
	int answer = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			answer += tree[i][j].size();
		}
	}
	cout << answer;
}