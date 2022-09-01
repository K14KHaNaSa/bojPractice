#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<int> rope(n);
	for (int i = 0; i < n; i++) {
		cin >> rope[i];
	}
	sort(rope.rbegin(), rope.rend());
	int maxw = rope[0];
	for (int i = 1; i <= n; i++) {
		maxw = max(maxw, rope[i - 1] * i);
	}
	cout << maxw;
}