#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool order[1000001];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, t, lo; // lo = last order
	queue<int> ordertime;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> t;
		order[t] = true;
		ordertime.push(t);
		if (i == n - 1) {
			lo = t;
		}
	}
	int cup = 0;
	int coffeecup = 0;
	bool success = true;
	for (int i = 0; i <= lo; i++) {
		if (order[i] == true) {
			if (coffeecup > 0) {
				coffeecup--;
			}
			else {
				success = false;
				break;
			}
		}
		else if (!ordertime.empty()) {
			if (ordertime.front() - i <= m && cup > 0) {
				cup--;
				coffeecup++;
				ordertime.pop();
			}
			else {
				cup++;
			}
		}
		else {
			cup++;
		}
	}
	if (success) {
		cout << "success";
	}
	else {
		cout << "fail";
	}
}