#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n; // ~ 997
	cout << n << "\n1 2 ";
	for (int i = 3; i < n; i++) {
		cout << i << " ";
	}
	cout << "997";
}