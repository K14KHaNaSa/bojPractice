#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<int> map(101);
int ladder[15][2];
int snake[15][2];
queue<int> phase;

void game() {
	while (!phase.empty() && map[100] == 0) {
		int state = phase.front();
		phase.pop();
		for (int i = 1; i <= 6; i++) {
			int next = 0;
			for (int j = 0; j < n; j++) {
				if (ladder[j][0] == state + i) {
					next = ladder[j][1];
				}
			}
			for (int j = 0; j < m; j++) {
				if (snake[j][0] == state + i) {
					next = snake[j][1];
				}
			}
			if (next == 0 && state + i <= 100) {
				if (map[state + i] == 0) {
					map[state + i] = map[state] + 1;
					phase.push(state + i);
				}
				else {
					map[state + i] = min(map[state + i], map[state] + 1);
				}
			}
			else {
				if (map[next] == 0) {
					map[next] = map[state] + 1;
					phase.push(next);
				}
				else {
					map[next] = min(map[next], map[state] + 1);
				}
			}
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	cin >> n >> m;
	int u, v;
	for (int i = 0; i < n; i++) {
		cin >> u >> v;
		ladder[i][0] = u;
		ladder[i][1] = v;
	}
	for (int i = 0; i < m; i++) {
		cin >> u >> v;
		snake[i][0] = u;
		snake[i][1] = v;
	}
	phase.push(1);
	game();
	cout << map[100];
}