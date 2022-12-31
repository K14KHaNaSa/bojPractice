#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	priority_queue<int> house;
	int n, snow;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> snow;
		house.push(snow);
	}
	int sweep_time = 0;
	while (house.size() > 1 && sweep_time < 1441) {
		int a = house.top();
		house.pop();
		int b = house.top();
		house.pop();
		if (a > 1) {
			house.push(a - 1);
		}
		if (b > 1) {
			house.push(b - 1);
		}
		sweep_time++;
	}
	if (!house.empty()) {
		sweep_time += house.top();
	}
	if (sweep_time < 1441) {
		cout << sweep_time;
	}
	else {
		cout << -1;
	}
}