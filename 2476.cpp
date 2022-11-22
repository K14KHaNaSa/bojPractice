#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, a, b, c, reward;
	int maxreward = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> c;
		if (a == b && b == c) {
			reward = a * 1000 + 10000;
		}
		else if (a == b) {
			reward = a * 100 + 1000;
		}
		else if (b == c) {
			reward = b * 100 + 1000;
		}
		else if (a == c) {
			reward = c * 100 + 1000;
		}
		else {
			if ((a > b && b > c)||(a>c&&c>b)) {
				reward = a * 100;
			}
			else if ((b > a && a > c) || (b > c) && (c > a)) {
				reward = b * 100;
			}
			else {
				reward = c * 100;
			}
		}
		maxreward = max(maxreward, reward);
	}
	cout << maxreward;
}