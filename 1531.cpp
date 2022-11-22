#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m, ldx, ldy, rux, ruy;
	cin >> n >> m;
	vector<vector<int>> pic(100, vector<int>(100));
	
	for (int i = 0; i < n; i++) {
		cin >> ldx >> ldy >> rux >> ruy;
		for (int j = ldx - 1; j < rux; j++) {
			for (int k = ldy - 1; k < ruy; k++) {
				pic[j][k]++;
			}
		}
	}
	
	int invisible = 0;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (pic[i][j] > m) {
				invisible++;
			}
		}
	}
	cout << invisible;
}