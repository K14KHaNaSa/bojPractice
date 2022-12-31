#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, a, b;
	cin >> n;
	int minb = 1001;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		if (a <= b) {
			minb = min(minb, b);
		}
	}
	if (minb != 1001) {
		cout << minb;
	}
	else {
		cout << -1;
	}
}