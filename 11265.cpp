#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, a, b, c;
	cin >> n >> m;
	vector<vector<int>> party(n, vector<int>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> party[i][j];
		}
	}
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				party[i][j] = min(party[i][j], party[i][k] + party[k][j]);
			}
		}
	}
	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		if (party[a - 1][b - 1] <= c) {
			cout << "Enjoy other party\n";
		}
		else {
			cout << "Stay here\n";
		}
	}
}