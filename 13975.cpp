#include <iostream>
#include <vector>
#include <queue>
using namespace std;

priority_queue<unsigned long int, vector<unsigned long int>, greater<unsigned long int>> allcost;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, k, cost;
	unsigned long int answer, firstcost, secondcost;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> k;
		for (int j = 0; j < k; j++) {
			cin >> cost;
			allcost.push(cost);
		}
		answer = 0;
		for (int j = 0; j < k - 1; j++) {
			firstcost = allcost.top();
			allcost.pop();
			secondcost = allcost.top();
			allcost.pop();
			answer += firstcost + secondcost;
			allcost.push(firstcost + secondcost);
		}
		cout << answer << "\n";
		allcost.pop();
	}
}