#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	unsigned long long int n;
	cin >> n;
	if (n == 1) {
		cout << 4;
	}
	else if (n == 2) {
		cout << 6;
	}
	else {
		vector<unsigned long long int> tile(n + 1);
		tile[1] = 1;
		tile[2] = 2;
		for (int i = 3; i <= n; i++) {
			tile[i] = tile[i - 1] + tile[i - 2];
		}
		cout << tile[n - 1] * 4 + tile[n - 2] * 2;
	}
}