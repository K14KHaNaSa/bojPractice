#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	int x, n, a, b, tot;
	tot = 0;
	cin >> x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		tot += a * b;
		if (tot == x) {
			cout << "Yes";
			return 0;
		}
	}
	cout << "No";

}