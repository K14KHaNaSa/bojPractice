#include <iostream>
#include <queue>
using namespace std;

int n, m;
int cu, cv, su, sv, mu, mv;
int map[3000][3000]; // 0 = able / 9~9 = blocked

bool food_check(int u, int v) {
	if (u == cu && v == cv)
		return true;
	else if (u == su && v == sv)
		return true;
	else if (u == mu && v == mv)
		return true;
	else
		return false;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char a;
	cin >> n >> m;
	queue<pair<int, int>> move;
	for (int i = 0; i < n; i++) {
		a = cin.get(); // \n dummy
		for (int j = 0; j < m; j++) {
			a = cin.get();
			if (a == '0')
				map[i][j] = 0;
			if (a == '1')
				map[i][j] = 9999999999;
			if (a == '2') {
				map[i][j] = 1;
				move.push(make_pair(i, j));
			}
			if (a == '3') {
				map[i][j] = 0;
				cu = i;
				cv = j;
			}
			if (a == '4') {
				map[i][j] = 0;
				su = i;
				sv = j;
			}
			if (a == '5') {
				map[i][j] = 0;
				mu = i;
				mv = j;
			}
		}
	}
	bool tak = false;
	int ans;
	while (!move.empty() && !tak) {
		int u = move.front().first;
		int v = move.front().second;
		move.pop();
		if (u > 0 && !tak) {
			if (map[u - 1][v] == 0) {
				if (food_check(u - 1, v)) {
					tak = true;
					ans = map[u][v];
				}
				else {
					map[u - 1][v] = map[u][v] + 1;
					move.push(make_pair(u - 1, v));
				}
			}
		}
		if (u < n - 1 && !tak) {
			if (map[u + 1][v] == 0) {
				if (food_check(u + 1, v)) {
					tak = true;
					ans = map[u][v];
				}
				else {
					map[u + 1][v] = map[u][v] + 1;
					move.push(make_pair(u + 1, v));
				}
			}
		}
		if (v > 0 && !tak) {
			if (map[u][v - 1] == 0) {
				if (food_check(u, v - 1)) {
					tak = true;
					ans = map[u][v];
				}
				else {
					map[u][v - 1] = map[u][v] + 1;
					move.push(make_pair(u, v - 1));
				}
			}
		}
		if (v < m - 1 && !tak) {
			if (map[u][v + 1] == 0) {
				if (food_check(u, v + 1)) {
					tak = true;
					ans = map[u][v];
				}
				else {
					map[u][v + 1] = map[u][v] + 1;
					move.push(make_pair(u, v + 1));
				}
			}
		}
	}
	//tak ? cout << "TAK\n" << ans : cout << "NIE";
	if (tak)
		cout << "TAK\n" << ans;
	else
		cout << "NIE";
}