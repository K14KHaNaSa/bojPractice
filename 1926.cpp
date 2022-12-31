#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m, onepicsize;
queue<pair<int, int>> pic;
vector<vector<int>> paper(500, vector<int>(500));

int onepic(int u, int v) {
	onepicsize = 0;
	pic.push(make_pair(u, v));
	paper[u][v] = 0;
	while (!pic.empty()) {
		int i = pic.front().first;
		int j = pic.front().second;
		pic.pop();
		onepicsize++;
		if (i > 0) {
			if (paper[i - 1][j] == 1) {
				pic.push(make_pair(i - 1, j));
				paper[i - 1][j] = 0;
			}
		}
		if (j > 0) {
			if (paper[i][j - 1] == 1) {
				pic.push(make_pair(i, j - 1));
				paper[i][j - 1] = 0;
			}
		}
		if (i < n - 1) {
			if (paper[i + 1][j] == 1) {
				pic.push(make_pair(i + 1, j));
				paper[i + 1][j] = 0;
			}
		}
		if (j < m - 1) {
			if (paper[i][j + 1] == 1) {
				pic.push(make_pair(i, j + 1));
				paper[i][j + 1] = 0;
			}
		}
	}
	return onepicsize;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> paper[i][j];
		}
	}
	int picsize;
	int largest = 0;
	int pics = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (paper[i][j] == 1) {
				picsize = onepic(i, j);
				pics++;
				if (largest < picsize) {
					largest = picsize;
				}
			}
		}
	}
	cout << pics << "\n" << largest;
}