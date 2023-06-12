#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	priority_queue<int> ai;
	int n, a;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		ai.push(a);
	}
	int answer = 0;
	ai.pop();
	while (ai.size() > 1) {
		answer += ai.top();
		ai.pop();
	}
	cout << answer;
}