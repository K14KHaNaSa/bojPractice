#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, w;
	cin >> n;
	vector<int> ball(n);
	priority_queue<int> sortball;
	for (int i = 0; i < n; i++) {
		cin >> w;
		ball[i] = w;
		sortball.push(w);
	}
	int answer = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (ball[i] == sortball.top()) {
			sortball.pop();
		}
		else {
			answer++;
		}
	}
	cout << answer;
}