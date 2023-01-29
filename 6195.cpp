#include <iostream>
#include <vector>
#include <queue>
using namespace std;

priority_queue<long long int, vector<long long int>, greater<long long int>> fence;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, fl;
	cin >> n;
	long long int answer = 0;
	for (int i = 0; i < n; i++) {
		cin >> fl;
		fence.push(fl);
	}
	while (fence.size() > 1) {
		long long int first = fence.top();
		fence.pop();
		long long int second = fence.top();
		fence.pop();
		answer += first + second;
		fence.push(first + second);
	}
	cout << answer;
}