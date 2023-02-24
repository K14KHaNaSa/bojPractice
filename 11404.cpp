#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, a, b, c;
	cin >> n >> m;
	vector<vector<int>> city(n, vector<int>(n, 1000000001));
	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		city[a - 1][b - 1] = min(city[a - 1][b - 1], c);
	}
	for (int i = 0; i < n; i++) {
		city[i][i] = 0;
	}
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				city[i][j] = min(city[i][j], city[i][k] + city[k][j]);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (city[i][j] < 1000000001) {
				cout << city[i][j] << " ";
			}
			else {
				cout << "0 ";
			}
		}
		cout << "\n";
	}
}