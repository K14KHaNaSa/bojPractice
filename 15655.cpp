#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
int ans[8];
void bt(int left, int dep, vector<int> arr) {
	if (dep == m) {
		for (int i = 0; i < m; i++) {
			cout << ans[i] << " ";
		}
		cout << "\n";
	}
	else {
		for (int i = left; i < n; i++) {
			ans[dep] = arr[i];
			bt(i + 1, dep + 1, arr);
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
	bt(0, 0, arr);
}