#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	char g;
	cin >> n;
	int up = n - 1;
	int down = 0;
	int left = n - 1;
	int right = 0;
	for (int i = 0; i < n; i++) {
		g = cin.get();
		for (int j = 0; j < n; j++) {
			g = cin.get();
			if (g == 'G') {
				up = min(up, i);
				down = max(down, i);
				left = min(left, j);
				right = max(right, j);
			}
		}
	}
	if (up == down && left == right) {
		cout << 0;
	}
	else if (up == down) {
		cout << min(right, n - left - 1);
	}
	else if (left == right) {
		cout << min(n - up - 1, down);
	}
	else {
		cout << min(right, n - left - 1) + min(n - up - 1, down);
	}
}