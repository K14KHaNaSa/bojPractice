#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> answer(500000);
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, height;
	cin >> n;
	stack<pair<int, int>> tower;
	stack<pair<int, int>> backtower;
	for (int i = 0; i < n; i++) {
		cin >> height;
		tower.push(make_pair(i, height));
	}
	for (int i = 0; i < n; i++) {
		if (backtower.empty()) {
			backtower.push(make_pair(tower.top().first, tower.top().second));
		}
		else {
			while (!backtower.empty() && tower.top().second > backtower.top().second) {
				if (tower.top().second > backtower.top().second);
				answer[backtower.top().first] = tower.top().first + 1;
				backtower.pop();
			}
			backtower.push(make_pair(tower.top().first, tower.top().second));
		}
		tower.pop();
	}
	for (int i = 0; i < n; i++) {
		cout << answer[i] << " ";
	}
}