#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, a;
	int answer = 0;
	priority_queue<int> odd;
	cin >> n;
	while (n--) {
		cin >> a;
		if (a % 2 == 0) {
			answer += a;
		}
		else {
			odd.push(a);
		}
	}
	while (odd.size() > 1) {
		answer += odd.top();
		odd.pop();
		answer += odd.top();
		odd.pop();
	}
	cout << answer;
}