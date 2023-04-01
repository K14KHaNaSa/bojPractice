#include <iostream>
#include <queue>
using namespace std;

int n, answer;
int map[20][20];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	int su, sv; // shark location
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
			if (map[i][j] == 9) {
				su = i;
				sv = j;
				map[i][j] = 0;
			}
		}
	}
	int sharksize = 2;
	int sharkbite = 0;
	answer = 0;
	bool able = true; // able to eat fish?
	while (able) {
		// search in map
		vector<vector<bool>> visit(n, vector<bool>(n, false));
		queue<pair<int, pair<int, int>>> move; // movecount , (u, v)
		move.push(make_pair(0, make_pair(su, sv)));
		visit[su][sv] = true;
		queue<pair<int, int>> target; // save the location searched targets
		int targetmove = 401;
		while (!move.empty()) {
			int movecount = move.front().first;
			int u = move.front().second.first;
			int v = move.front().second.second;
			move.pop();
			if (u > 0) {
				if (!visit[u - 1][v] && map[u - 1][v] <= sharksize) {
					visit[u - 1][v] = true;
					if (map[u - 1][v] > 0 && map[u - 1][v] < sharksize && (movecount < targetmove || targetmove>400)) {
						target.push(make_pair(u - 1, v));
						targetmove = movecount + 1;
					}
					else if (targetmove > 400) {
						move.push(make_pair(movecount + 1, make_pair(u - 1, v)));
					}
				}
			}
			if (u < n - 1) {
				if (!visit[u + 1][v] && map[u + 1][v] <= sharksize) {
					visit[u + 1][v] = true;
					if (map[u + 1][v] > 0 && map[u + 1][v] < sharksize && (movecount < targetmove || targetmove>400)) {
						target.push(make_pair(u + 1, v));
						targetmove = movecount + 1;
					}
					else if (targetmove > 400) {
						move.push(make_pair(movecount + 1, make_pair(u + 1, v)));
					}
				}
			}
			if (v > 0) {
				if (!visit[u][v - 1] && map[u][v - 1] <= sharksize) {
					visit[u][v - 1] = true;
					if (map[u][v - 1] > 0 && map[u][v - 1] < sharksize && (movecount < targetmove || targetmove>400)) {
						target.push(make_pair(u, v - 1));
						targetmove = movecount + 1;
					}
					else if (targetmove > 400) {
						move.push(make_pair(movecount + 1, make_pair(u, v - 1)));
					}
				}
			}
			if (v < n - 1) {
				if (!visit[u][v + 1] && map[u][v + 1] <= sharksize) {
					visit[u][v + 1] = true;
					if (map[u][v + 1] > 0 && map[u][v + 1] < sharksize && (movecount < targetmove || targetmove>400)) {
						target.push(make_pair(u, v + 1));
						targetmove = movecount + 1;
					}
					else if (targetmove > 400) {
						move.push(make_pair(movecount + 1, make_pair(u, v + 1)));
					}
				}
			}
		}
		int nextu;
		int nextv;
		if (targetmove > 400) { // unable 2 eating fish
			able = false;
			break;
		}
		else {	// find the target
			nextu = target.front().first;
			nextv = target.front().second;
			target.pop();
			if (target.size() > 0) {
				while (!target.empty()) {
					if (nextu > target.front().first) {
						nextu = target.front().first;
						nextv = target.front().second;
					}
					else if (nextu == target.front().first && nextv > target.front().second) {
						nextu = target.front().first;
						nextv = target.front().second;
					}
					target.pop();
				}
			}
			answer += targetmove;
			su = nextu;
			sv = nextv;
			map[su][sv] = 0;
			sharkbite++;
			if (sharksize == sharkbite) {
				sharksize++;
				sharkbite = 0;
			}
		}
	}
	cout << answer;
}