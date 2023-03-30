#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool samecheck[8];
int outs[8];
int n, m;

void bt(int from, int depth, vector<int> arr) {
	if (depth == 0) {
		for (int i = 0; i < m; i++) {
			cout << outs[i] << " ";
		}
		cout << "\n";
	}
	else {
		int pre = 0;
		for (int i = 1; i <= n; i++) {
			if (arr[i - 1] > pre) {
				outs[m - depth] = arr[i - 1];
				pre = outs[m - depth];
				if (depth != m) {
					if (arr[i - 1] >= outs[m - depth - 1]) {
						bt(i, depth - 1, arr);
					}
				}
				else {
					bt(i, depth - 1, arr);
				}
			}
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	bt(1, m, arr);
}