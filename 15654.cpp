#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool visit[9];
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
		for (int i = 1; i <= n; i++) {
			if (!visit[i]) {
				outs[m - depth] = arr[i - 1];
				visit[i] = true;
				bt(i, depth - 1, arr);
				visit[i] = false;
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