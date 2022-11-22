#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

unsigned long int n;
queue<pair<unsigned long int, unsigned long int>> step;

void bfs(unsigned long int u) {
	bool avail = false;
	unsigned long int answer = 1000000000;
	step.push(make_pair(u, 1));
	while (!step.empty()) {
		unsigned long int u = step.front().first;
		unsigned long int v = step.front().second;
		step.pop();
		if (u % 2 == 0 && u / 2 == n) {
			answer = min(answer, v + 1);
			avail = true;
		}
		if ((u - 1) % 10 == 0 && (u - 1) / 10 == n) {
			answer = min(answer, v + 1);
			avail = true;
		}
		if (u % 2 == 0 && u / 2 > 0 && u > n) {
			step.push(make_pair((u / 2), v + 1));
		}
		if ((u - 1) % 10 == 0 && (u - 1) / 10 > 0 && u > n) {
			step.push(make_pair((u - 1) / 10, v + 1));
		}
	}
	if (!avail) {
		cout << -1;
	}
	else {
		cout << answer;
	}
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	unsigned long int k;
	cin >> n >> k;
	bfs(k);
}