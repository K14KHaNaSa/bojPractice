#include <iostream>
#include <queue>
using namespace std;

int n, m, d, answer;
int map[15][15];
int archer[3];
bool arcset[15];

void game(void) {
	int gamemap[15][15];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			gamemap[i][j] = map[i][j];
		}
	}
	int result = 0;
	for (int i = n - 1; i >= 0; i--) {
		// start search from map[i][archer[0~2]] (as d = 1)
		queue<pair<int, int>> removedenemy;
		for (int j = 0; j < 3; j++) {
			if (gamemap[i][archer[j]] == 1) {
				removedenemy.push(make_pair(i, archer[j]));
				// shortest(d=1) path searched
			}
			else {
				queue<pair<pair<int, int>, int>> target;
				target.push(make_pair(make_pair(i, archer[j]), 1));
				bool lockon = false;
				while (!target.empty() && !lockon) {
					int u = target.front().first.first;
					int v = target.front().first.second;
					int sight = target.front().second;
					target.pop();
					if (!target.empty()) {
						if (target.front().first.first == u && target.front().first.second == v) {
							target.pop();
						}
					}
					if (!lockon && v > 0 && sight < d) { // left
						if (gamemap[u][v - 1] > 0) {
							removedenemy.push(make_pair(u, v - 1));
							lockon = true;
							while (!target.empty()) {
								target.pop();
							}
						}
						else {
							target.push(make_pair(make_pair(u, v - 1), sight + 1));
						}
					}
					if (!lockon && u > 0 && sight < d) { // up
						if (gamemap[u - 1][v] > 0) {
							removedenemy.push(make_pair(u - 1, v));
							lockon = true;
							while (!target.empty()) {
								target.pop();
							}
						}
						else {
							target.push(make_pair(make_pair(u - 1, v), sight + 1));
						}
					}
					if (!lockon && v < m - 1 && sight < d) { // right
						if (gamemap[u][v + 1] > 0) {
							removedenemy.push(make_pair(u, v + 1));
							lockon = true;
							while (!target.empty()) {
								target.pop();
							}
						}
						else {
							target.push(make_pair(make_pair(u, v + 1), sight + 1));
						}
					}
				}
			}
		}
		while (!removedenemy.empty()) { // archers can target same enemy
			int u = removedenemy.front().first;
			int v = removedenemy.front().second;
			removedenemy.pop();
			if (gamemap[u][v] > 0) {
				result++;
				gamemap[u][v] = 0;
			} // else = already cleared enemy by other archer
		}
	}
	answer = max(answer, result);
}

void archerbt(int as, int left) {
	if (as == 3) {
		//simulation
		game();
	}
	else {
		// bt for set archer
		for (int i = left; i < m; i++) {
			if (!arcset[i]) {
				arcset[i] = true;
				archer[as] = i;
				archerbt(as + 1, i + 1);
				arcset[i] = false;
			}
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	answer = 0;
	cin >> n >> m >> d;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
		}
	}
	archerbt(0, 0);
	cout << answer;
}