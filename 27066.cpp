#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	vector<double> block(n);
	double inputsum = 0;
	for (int i = 0; i < n; i++) {
		cin >> block[i];
		inputsum += block[i];
	}
	sort(block.begin(), block.end());
	if (n == 1) {
		cout << block[0];
	}
	else if (inputsum / n > block[n - 2]) {
		cout << setiosflags(ios_base::fixed) << setprecision(6) << inputsum / n;
	}
	else {
		cout << block[n - 2];
	}
}