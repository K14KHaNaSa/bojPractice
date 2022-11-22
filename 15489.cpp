#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	vector<vector<int>> psc(31,vector<int>(31));
	int r, c, w;
	cin >> r >> c >> w;
	for (int i = 1; i <= r + w; i++) {
		for (int j = 1; j <= i; j++) {
			if (j == 1) {
				psc[i][j] = 1;
			}
			else {
				psc[i][j] = psc[i - 1][j - 1] + psc[i - 1][j];
			}
		}
	}
	int answer = 0;
	int lvl = 1;
	for (int i = r; i < r + w; i++) {
		for (int j = c; j < lvl + c; j++) {
			answer += psc[i][j];
		}
		lvl++;
	}
	cout << answer;
}