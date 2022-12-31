#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	int n;
	long int x, y;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		cout << x + y << "\n";
	}
}