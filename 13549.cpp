#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int n, k;
vector<int> map(100001);
vector<bool> visit(100001);
queue<int> phase;

void game() {
	while (!phase.empty()) {
		int state = phase.front();
		phase.pop();
		if (state < 50001 && state != 0) {
			if (state * 2 == k) {
				map[state * 2] = min(map[state * 2], map[state]);
				visit[state * 2] = true;
			}
			if (map[state * 2] == 0 && visit[state * 2] == false) {
				map[state * 2] = map[state];
				visit[state * 2] = true;
				phase.push(state * 2);
			}
			else if (map[state * 2] > map[state]) {
				map[state * 2] = map[state];
				if (map[k] > map[state]) {
					phase.push(state * 2);
				}
			}
		}
		if (state > 0) {
			if (map[state - 1] == 0 && visit[state - 1] == false) {
				map[state - 1] = map[state] + 1;
				visit[state - 1] = true;
				phase.push(state - 1);
			}
			else {
				if (map[state - 1] > map[state] + 1) {
					map[state - 1] = map[state] + 1;
					if (map[k] > map[state] + 1) {
						phase.push(state - 1);
					}
				}
			}
		}
		if (state < 100000) {
			if (map[state + 1] == 0 && visit[state + 1] == false) {
				map[state + 1] = map[state] + 1;
				visit[state + 1] = true;
				phase.push(state + 1);
			}
			else {
				if (map[state + 1] > map[state] + 1) {
					map[state + 1] = map[state] + 1;
					if (map[k] > map[state] + 1) {
						phase.push(state + 1);
					}
				}
			}
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	cin >> n >> k;
	phase.push(n);
	visit[n] = true;
	map[k] = 100000;
	if (n < k) {
		game();
		cout << map[k];
	}
	else if (n == k) {
		cout << 0;
	}
	else {
		cout << n - k;
	}
}