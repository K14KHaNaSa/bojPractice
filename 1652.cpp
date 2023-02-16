#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	vector<vector<bool>> roomu(n, vector<bool>(n));
	vector<vector<bool>> roomv(n, vector<bool>(n));
	char x;
	for (int i = 0; i < n; i++) {
		x = cin.get();
		for (int j = 0; j < n; j++) {
			x = cin.get();
			if (x == '.') {
				roomu[i][j] = true;
				roomv[i][j] = true;
			}
		}
	}
	int us = 0;
	int vs = 0;
	for (int i = 0; i < n; i++) {
		bool body = false;
		for (int j = 0; j < n - 1; j++) {
			if (body && !roomu[i][j]) {
				body = false;
			}
			else if (!body && roomu[i][j] && roomu[i][j + 1]) {
				us++;
				body = true;
			}
		}
	}
	for (int j = 0; j < n; j++) {
		bool body = false;
		for (int i = 0; i < n - 1; i++) {
			if (body && !roomu[i][j]) {
				body = false;
			}
			else if (!body && roomv[i][j] && roomv[i + 1][j]) {
				vs++;
				body = true;
			}
		}
	}
	cout << us << " " << vs;
}