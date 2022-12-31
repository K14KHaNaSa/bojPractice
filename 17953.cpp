#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	vector<vector<unsigned int>> v(m, vector<unsigned int>(n));
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> v[i][j];
		}
	}
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < m; j++) {
			unsigned int notsame = 0;
			for (int k = 0; k < m; k++) {
				if (j != k) {
					notsame = max(notsame, v[k][i - 1]);
				}
			}
			v[j][i] = max(notsame + v[j][i], v[j][i - 1] + (v[j][i] / 2));
		}
	}
	unsigned int lastdaygood = v[0][n - 1];
	for (int i = 1; i < m; i++) {
		lastdaygood = max(lastdaygood, v[i][n - 1]);
	}
	cout << lastdaygood;
}