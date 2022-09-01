#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m, input, i, j;
	vector<int> temp(100001);
	cin >> n;
	for (int k = 1; k <= n; k++) {
		cin >> input;
		temp[k] = input + temp[k - 1];
	}
	cin >> m;
	for (int k = 0; k < m; k++) {
		cin >> i >> j;
		cout << temp[j] - temp[i - 1] << "\n";
	}
}