#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, floor, ho;
	cin >> n;
	vector<vector<int>> apt(15, vector<int>(15));
	for (int i = 0; i < 15; i++) {
		apt[0][i] = i;
	}
	for (int i = 1; i < 15; i++) {
		for (int j = 1; j < 15; j++) {
			apt[i][j] = apt[i - 1][j] + apt[i][j - 1];
		}
	}
	for (int i = 0; i < n; i++) {
		cin >> floor >> ho;
		cout << apt[floor][ho] << "\n";
	}
}