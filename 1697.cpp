#include <iostream>
#include <queue>
using namespace std;

int area[100001] = { 0 };
int k;
queue<int> step;

int bfs(int u) {
	step.push(u);
	while (!step.empty()) {
		int x = step.front();
		step.pop();
		if (x - 1 >= 0 && area[x - 1] == 0) {
			step.push(x - 1);
			area[x - 1] = area[x] + 1;
		}
		if (x + 1 <= k && x + 1 < 100001 && area[x + 1] == 0) {
			step.push(x + 1);
			area[x + 1] = area[x] + 1;
		}
		if (x * 2 < k * 2 && x * 2 < 100001 && area[x * 2] == 0) {
			step.push(x * 2);
			area[x * 2] = area[x] + 1;
		}
		if (step.empty() || area[k] != 0) {
			cout << area[k];
			return 0;
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n >> k;
	area[n] = 0;
	if (n == k) {
		cout << 0;
	}
	else {
		bfs(n);
	}
}