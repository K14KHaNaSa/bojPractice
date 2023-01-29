#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, cost;
	cin >> n;
	vector<int> map(n);
	vector<int> button(n);
	cin >> map[0];
	button[0] = 0;
	for (int j = 1; j < n; j++) {
		cin >> cost;
		if (cost < map[j - 1]) {
			button[j] = button[j - 1];
		}
		else {
			button[j] = (cost - map[j - 1] + 1) + button[j - 1];
		}
		map[j] = cost;
	}
	for (int i = 1; i < n; i++) {
		cin >> cost;
		if (cost >= map[0]) {
			button[0] = (cost - map[0] + 1) + button[0];
		}
		map[0] = cost;
		for (int j = 1; j < n; j++) {
			cin >> cost;
			int left = max(cost - map[j - 1] + 1, 0) + button[j - 1];
			int up = max(cost - map[j] + 1, 0) + button[j];
			button[j] = min(left, up);
			map[j] = cost;
		}
	}
	cout << button[n - 1];
}