#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, a, b;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		cout << "Case " << i + 1 << ": " << a + b << "\n";
	}
}