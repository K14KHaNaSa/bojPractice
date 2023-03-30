#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, k;
	cin >> n >> m >> k;
	if (n + m - 2 >= k) {
		cout << "NO";
	}
	else {
		cout << "YES\n";
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout << i + j + 1 << " ";
			}
			cout << "\n";
		}
	}
}