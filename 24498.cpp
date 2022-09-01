#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, height, left, mid, maxheight;
	cin >> n;
	if (n < 3) {
		if (n == 1) {
			cin >> height;
			cout << height;
		}
		else {
			cin >> left >> mid;
			cout << max(left, mid);
		}
	}
	else {
		cin >> left >> mid;
		maxheight = max(left, mid);
		for (int i = 3; i < n; i++) {
			cin >> height;
			maxheight = max(maxheight, min(left, height) + mid);
			left = mid;
			mid = height;
		}
		cin >> height;
		maxheight = max(maxheight, min(left, height) + mid);
		if (maxheight > height) {
			cout << maxheight;
		}
		else {
			cout << height;
		}
	}
}