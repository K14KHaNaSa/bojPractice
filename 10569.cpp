#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t, v, e;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> v >> e;
		cout << e - v + 2 << "\n";
	}
}