#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, a, b;
	cin >> n >> m;
	vector<vector<int>> bacon(n, vector<int>(n,5000001));
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		bacon[a - 1][b - 1] = 1;
		bacon[b - 1][a - 1] = 1;
	}
	for (int i = 0; i < n; i++) {
		bacon[i][i] = 0;
	}
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				bacon[i][j] = min(bacon[i][j], bacon[i][k] + bacon[k][j]);
			}
		}
	}
	int minbacon = 5000001;
	int user, ubacon;
	for (int i = 0; i < n; i++) {
		ubacon = 0;
		for (int j = 0; j < n; j++) {
			ubacon += bacon[i][j];
		}
		if (ubacon < minbacon) {
			user = i + 1;
			minbacon = ubacon;
		}
	}
	cout << user;
}