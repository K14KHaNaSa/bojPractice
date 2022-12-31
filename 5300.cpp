#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cout << i << " ";
		if (i % 6 == 0) {
			cout << "Go! ";
		}
		else if (i == n) {
			cout << "Go! ";
		}
	}
}