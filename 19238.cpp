#include <iostream>
#include <queue>
#include <tuple>
#include <vector>
using namespace std;

int n, m, fuel;
int map[20][20]; // 9999 = blocked
int working[400][4]; // indexno. { fromu, fromv, tou, tov }

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m >> fuel;
	vector<vector<int>> road(m, vector<int>(m, 401)); // ** warning ** road["to"]["from"]
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
			if (map[i][j] == 1) {
				map[i][j] = 9999;
			}
		}
	}
	int startu, startv;
	cin >> startu >> startv;
	startu--;
	startv--;
	int fu, fv, tu, tv;
	for (int i = 0; i < m; i++) {
		cin >> fu >> fv >> tu >> tv;
		working[i][0] = fu - 1;
		working[i][1] = fv - 1;
		working[i][2] = tu - 1;
		working[i][3] = tv - 1;
	}
	// check length from "destination" to "start"
	for (int i = 0; i < m; i++) {
		vector<vector<bool>> visit(n, vector<bool>(n));
		queue<tuple<int, int, int>> move; // movecount, u, v
		move.push(make_tuple(0, working[i][2], working[i][3]));
		visit[working[i][2]][working[i][3]] = true;
		for (int j = 0; j < m; j++) {
			if (working[i][2] == working[j][0] && working[i][3] == working[j][1]) {
				road[i][j] = 0;
			}
		}
		while (!move.empty()) {
			int movecount = get<0>(move.front());
			int u = get<1>(move.front());
			int v = get<2>(move.front());
			move.pop();
			if (u > 0) {
				if (map[u - 1][v] < 9999 && !visit[u - 1][v]) {
					for (int j = 0; j < m; j++) {
						if (working[j][0] == u - 1 && working[j][1] == v) {
							road[i][j] = movecount + 1;
						}
					}
					visit[u - 1][v] = true;
					move.push(make_tuple(movecount + 1, u - 1, v));
				}
			}
			if (u < n - 1) {
				if (map[u + 1][v] < 9999 && !visit[u + 1][v]) {
					for (int j = 0; j < m; j++) {
						if (working[j][0] == u + 1 && working[j][1] == v) {
							road[i][j] = movecount + 1;
						}
					}
					visit[u + 1][v] = true;
					move.push(make_tuple(movecount + 1, u + 1, v));
				}
			}
			if (v > 0) {
				if (map[u][v - 1] < 9999 && !visit[u][v - 1]) {
					for (int j = 0; j < m; j++) {
						if (working[j][0] == u && working[j][1] == v - 1) {
							road[i][j] = movecount + 1;
						}
					}
					visit[u][v - 1] = true;
					move.push(make_tuple(movecount + 1, u, v - 1));
				}
			}
			if (v < n - 1) {
				if (map[u][v + 1] < 9999 && !visit[u][v + 1]) {
					for (int j = 0; j < m; j++) {
						if (working[j][0] == u && working[j][1] == v + 1) {
							road[i][j] = movecount + 1;
						}
					}
					visit[u][v + 1] = true;
					move.push(make_tuple(movecount + 1, u, v + 1));
				}
			}
		}
	}
	bool success = true;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			if (road[i][j] == 401) {
				success = false;
			}
		}
	}
	if (success) {
		// shortest first people searching
		int startno;
		vector<bool> delivered(m);
		vector<vector<bool>> visit(n, vector<bool>(n));
		visit[startu][startv] = true;
		queue<tuple<int, int, int>> move; // movecount, u, v
		int firstmove = 401;
		queue<int> shortestindex;
		move.push(make_tuple(0, startu, startv));
		for (int i = 0; i < m; i++) {
			if (startu == working[i][0] && startv == working[i][1]) {
				shortestindex.push(i);
				firstmove = 0;
				move.pop();
				break;
			}
		}
		while (!move.empty()) {
			int movecount = get<0>(move.front());
			int u = get<1>(move.front());
			int v = get<2>(move.front());
			move.pop();
			if (u > 0) {
				if (map[u - 1][v] < 9999 && !visit[u - 1][v]) {
					visit[u - 1][v] = true;
					for (int j = 0; j < m; j++) {
						if (working[j][0] == u - 1 && working[j][1] == v && firstmove >= movecount + 1) {
							firstmove = movecount + 1;
							shortestindex.push(j);
						}
					}
					if (firstmove > 400) {
						move.push(make_tuple(movecount + 1, u - 1, v));
					}
				}
			}
			if (u < n - 1) {
				if (map[u + 1][v] < 9999 && !visit[u + 1][v]) {
					visit[u + 1][v] = true;
					for (int j = 0; j < m; j++) {
						if (working[j][0] == u + 1 && working[j][1] == v && firstmove >= movecount + 1) {
							firstmove = movecount + 1;
							shortestindex.push(j);
						}
					}
					if (firstmove > 400) {
						move.push(make_tuple(movecount + 1, u + 1, v));
					}
				}
			}
			if (v > 0) {
				if (map[u][v - 1] < 9999 && !visit[u][v - 1]) {
					visit[u][v - 1] = true;
					for (int j = 0; j < m; j++) {
						if (working[j][0] == u && working[j][1] == v - 1 && firstmove >= movecount + 1) {
							firstmove = movecount + 1;
							shortestindex.push(j);
						}
					}
					if (firstmove > 400) {
						move.push(make_tuple(movecount + 1, u, v - 1));
					}
				}
			}
			if (v < n - 1) {
				if (map[u][v + 1] < 9999 && !visit[u][v + 1]) {
					visit[u][v + 1] = true;
					for (int j = 0; j < m; j++) {
						if (working[j][0] == u && working[j][1] == v + 1 && firstmove >= movecount + 1) {
							firstmove = movecount + 1;
							shortestindex.push(j);
						}
					}
					if (firstmove > 400) {
						move.push(make_tuple(movecount + 1, u, v + 1));
					}
				}
			}
		}
		if (shortestindex.empty()) {
			success = false;
		}
		else {
			startno = shortestindex.front();
			// find first in same length
			if (shortestindex.size() > 1) {
				int beforeu = working[startno][0];
				int beforev = working[startno][1];
				shortestindex.pop();
				for (int i = 0; i < shortestindex.size(); i++) {
					if (working[shortestindex.front()][0] < beforeu) {
						startno = shortestindex.front();
						beforeu = working[startno][0];
						beforev = working[startno][1];
					}
					else if (working[shortestindex.front()][0] == beforeu) {
						if (working[shortestindex.front()][1] < beforev) {
							startno = shortestindex.front();
							beforeu = working[startno][0];
							beforev = working[startno][1];
						}
					}
					shortestindex.pop();
				}
			}
			bool finished = false;
			// first drive
			fuel -= firstmove;
			fuel -= road[startno][startno];
			if (fuel < 0) {
				success = false;
			}
			else {
				delivered[startno] = true;
				fuel += road[startno][startno] * 2;
			}
			int nowhere = startno;
			int nextlength;
			int nextu;
			int nextv;
			while (!finished) {
				nextlength = 402;
				int nextdestination;
				for (int i = 0; i < m; i++) {
					if (!delivered[i]) {
						if (nextlength > road[nowhere][i]) {
							nextlength = road[nowhere][i];
							nextu = working[i][0];
							nextv = working[i][1];
							nextdestination = i;
						}
						else if (nextlength == road[nowhere][i]) {
							if (nextu > working[i][0]) {
								nextu = working[i][0];
								nextv = working[i][1];
								nextdestination = i;
							}
							else if (nextu == working[i][0]) {
								if (nextv > working[i][1]) {
									nextv = working[i][1];
									nextdestination = i;
								}
							}
						}
					}
				}
				if (nextlength > 400) { // delivered all true
					finished = true;
					if (nextlength == 401) {
						success = false;
					}
				}
				else {
					fuel -= road[nowhere][nextdestination];
					fuel -= road[nextdestination][nextdestination];
					if (fuel < 0) {
						success = false;
						finished = true;
					}
					else {
						delivered[nextdestination] = true;
						fuel += road[nextdestination][nextdestination] * 2;
						nowhere = nextdestination;
					}
				}
			}
		}		
	}
	if (!success) {
		cout << "-1";
	}
	else {
		cout << fuel;
	}
}