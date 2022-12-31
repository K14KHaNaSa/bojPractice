#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, linesum;
	cin >> n;
	bool nevermsq = false;
	vector<int> numcount(n * n + 1);
	vector<vector<int>> msq(n, vector<int>(n));
	int msqsum = n * (n * n + 1) / 2;
	for (int i = 0; i < n; i++) {
		linesum = 0;
		for (int j = 0; j < n; j++) {
			cin >> msq[i][j];
			linesum += msq[i][j];
			numcount[msq[i][j]]++;
		}
		if (linesum != msqsum) {
			nevermsq = true;
		}
	}
	linesum = 0;
	int linesumx = 0;
	int linesumy;
	for (int i = 0; i < n; i++) {
		linesum += msq[i][n - i - 1];
		linesumx += msq[n - i - 1][i];
		linesumy = 0;
		for (int j = 0; j < n; j++) {
			linesumy += msq[j][i];
		}
		if (linesumy != msqsum) {
			nevermsq = true;
		}
	}
	if (linesum != msqsum || linesumx != msqsum) {
		nevermsq = true;
	}
	for (int i = 1; i <= n * n; i++) {
		if (numcount[i] != 1) {
			nevermsq = true;
		}
	}
	if (nevermsq) {
		cout << "FALSE";
	}
	else {
		cout << "TRUE";
	}
}