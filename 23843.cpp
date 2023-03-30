#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, t;
	cin >> n >> m;
	priority_queue<int> needcharge;
	priority_queue<int, vector<int>, greater<int>> chargetime;
	for (int i = 0; i < n; i++) {
		cin >> t;
		needcharge.push(t);
	}
	for (int i = 0; i < m; i++) {
		chargetime.push(0);
	}
	for (int i = 0; i < n; i++) {
		int concent = chargetime.top();
		chargetime.pop();
		int charger = needcharge.top();
		needcharge.pop();
		chargetime.push(concent + charger);
	}
	while (chargetime.size() > 1) {
		chargetime.pop();
	}
	cout << chargetime.top();
}