#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, x;
	cin >> n;
	vector<bool> pairs(n + 1);
	for (int i = 0; i < n * 2 - 1; i++) {
		cin >> x;
		if (!pairs[x]) {
			pairs[x] = true;
		}
		else if (pairs[x]) {
			pairs[x] = false;
		}
	}
	for (int i = 1; i <= n; i++) {
		if (pairs[i]) {
			cout << i;
			break;
		}
	}
}