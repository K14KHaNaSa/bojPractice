#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, j;
	int ans_j = 1000000001;
	int ans;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> j;
		if (j < ans_j) {
			ans_j = j;
			ans = i;
		}
	}
	cout << ans;
}