#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, l, fromu, fromv, tou, tov;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> l;
		vector<vector<int>> map(l, vector<int>(l, 999999999));
		cin >> fromu >> fromv >> tou >> tov;
		map[fromu][fromv] = 0;
		queue<pair<int, int>> move;
		if (!(fromu == tou && fromv == tov)) {
			move.push(make_pair(fromu, fromv));
		}
		while (!move.empty()) {
			int u = move.front().first;
			int v = move.front().second;
			bool arrived = false;
			move.pop();
			if (u > 0) {
				if (u > 1) {
					if (v > 0) {
						if (u - 2 == tou && v - 1 == tov) {
							arrived = true;
							map[u - 2][v - 1] = map[u][v] + 1;
						}
						else if (map[u - 2][v - 1] > map[u][v] + 1) {
							move.push(make_pair(u - 2, v - 1));
							map[u - 2][v - 1] = map[u][v] + 1;
						}
					}
					if (v < l - 1) {
						if (u - 2 == tou && v + 1 == tov) {
							arrived = true;
							map[u - 2][v + 1] = map[u][v] + 1;
						}
						else if (map[u - 2][v + 1] > map[u][v] + 1) {
							move.push(make_pair(u - 2, v + 1));
							map[u - 2][v + 1] = map[u][v] + 1;
						}
					}
				}
				if (v > 1) {
					if (u - 1 == tou && v - 2 == tov) {
						arrived = true;
						map[u - 1][v - 2] = map[u][v] + 1;
					}
					else if (map[u - 1][v - 2] > map[u][v] + 1) {
						move.push(make_pair(u - 1, v - 2));
						map[u - 1][v - 2] = map[u][v] + 1;
					}
				}
				if (v < l - 2) {
					if (u - 1 == tou && v + 2 == tov) {
						arrived = true;
						map[u - 1][v + 2] = map[u][v] + 1;
					}
					else if (map[u - 1][v + 2] > map[u][v] + 1) {
						move.push(make_pair(u - 1, v + 2));
						map[u - 1][v + 2] = map[u][v] + 1;
					}
					
				}
			}
			if (u < l - 1) {
				if (u < l - 2) {
					if (v > 0) {
						if (u + 2 == tou && v - 1 == tov) {
							arrived = true;
							map[u + 2][v - 1] = map[u][v] + 1;
						}
						else if (map[u + 2][v - 1] > map[u][v] + 1) {
							move.push(make_pair(u + 2, v - 1));
							map[u + 2][v - 1] = map[u][v] + 1;
						}
					}
					if (v < l - 1) {
						if (u + 2 == tou && v + 1 == tov) {
							arrived = true;
							map[u + 2][v + 1] = map[u][v] + 1;
						}
						else if (map[u + 2][v + 1] > map[u][v] + 1) {
							move.push(make_pair(u + 2, v + 1));
							map[u + 2][v + 1] = map[u][v] + 1;
						}
					}
				}
				if (v > 1) {
					if (u + 1 == tou && v - 2 == tov) {
						arrived = true;
						map[u + 1][v - 2] = map[u][v] + 1;
					}
					else if (map[u + 1][v - 2] > map[u][v] + 1) {
						move.push(make_pair(u + 1, v - 2));
						map[u + 1][v - 2] = map[u][v] + 1;
					}
				}
				if (v < l - 2) {
					if (u + 1 == tou && v + 2 == tov) {
						arrived = true;
						map[u + 1][v + 2] = map[u][v] + 1;
					}
					else if (map[u + 1][v + 2] > map[u][v] + 1) {
						move.push(make_pair(u + 1, v + 2));
						map[u + 1][v + 2] = map[u][v] + 1;
					}
				}
			}
			if (arrived) {
				while (!move.empty()) {
					move.pop();
				}
			}
		}
		cout << map[tou][tov] << "\n";
	}
}