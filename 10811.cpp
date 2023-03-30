#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, i, j;
	cin >> n >> m;
	vector<int> bag(n + 1);
	for (int k = 1; k <= n; k++) {
		bag[k] = k;
	}
	while (m--) {
		cin >> i >> j;
		vector<int> temp(j - i + 1);
		for (int k = 0; k < j - i + 1; k++) {
			temp[k] = bag[i + k];
		}
		for (int k = 0; k < j - i + 1; k++) {
			bag[i + k] = temp[j - i - k];
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << bag[i] << " ";
	}
}