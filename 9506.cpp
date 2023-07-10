#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	while (n != -1) {
		priority_queue<int> ans;
		int sum = 1;
		ans.push(-1);
		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				ans.push(-1 * i);
				sum += i;
			}
		}
		if (sum == n) {
			cout << n << " = ";
			while (ans.size() > 1) {
				cout << -1 * ans.top() << " + ";
				ans.pop();
			}
			cout << -1 * ans.top() << "\n";
		}
		else {
			cout << n << " is NOT perfect.\n";
		}
		ans = {};
		cin >> n;
	}
}