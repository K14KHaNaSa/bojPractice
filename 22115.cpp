#include <iostream>
#include <vector>
using namespace std;

vector<int> caf(100001, 101);
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k, c;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> c;
		for (int j = k; j >= c; j--) {
			caf[j] = min(caf[j], caf[j - c] + 1);
		}
		caf[c] = 1;
	}
	if (k == 0) {
		cout << 0;
	}
	else if (caf[k] > 100) {
		cout << -1;
	}
	else {
		cout << caf[k];
	}
}