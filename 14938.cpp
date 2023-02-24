#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, r, a, b, l;
	cin >> n >> m >> r;
	vector<int> item(n);
	vector<vector<int>> field(n, vector<int>(n, 15001));
	for (int i = 0; i < n; i++) {
		cin >> item[i];
	}
	for (int i = 0; i < r; i++) {
		cin >> a >> b >> l;
		field[a - 1][b - 1] = min(field[a - 1][b - 1], l);
		field[b - 1][a - 1] = min(field[b - 1][a - 1], l);
	}
	for (int i = 0; i < n; i++) {
		field[i][i] = 0;
	}
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				field[i][j] = min(field[i][j], field[i][k] + field[k][j]);
			}
		}
	}
	int answer = 0;
	int t;
	for (int i = 0; i < n; i++) {
		t = 0;
		for (int j = 0; j < n; j++) {
			if (field[i][j] <= m) {
				t += item[j];
			}
		}
		answer = max(answer, t);
	}
	cout << answer;
}