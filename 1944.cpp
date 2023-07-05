#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int map[50][50]; // 0 = road / 1 = wall / 2 ~ m+1 key
int key[251][2]; // 0 = start / 1 ~ m = key
bool itmoved[251][251];
bool mstlinked[251];
vector<pair<int, int>> keymove[251];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	char mt;
	int ks = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		mt = cin.get();
		for (int j = 0; j < n; j++) {
			mt = cin.get();
			if (mt == '1') {
				map[i][j] = 1;
			}
			else if (mt == '0') {
				map[i][j] = 0;
			}
			else if (mt == 'S') {
				key[0][0] = i;
				key[0][1] = j;
			}
			else if (mt == 'K') {
				key[ks + 1][0] = i;
				key[ks + 1][1] = j;
				map[i][j] = 2 + ks;
				ks++;
			}
		}
	}
	//bfs
	queue<pair<int, pair<int, int>>> move;
	for (int k = 0; k <= m; k++) {
		int testmap[50][50];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				testmap[i][j] = map[i][j];
			}
		}
		move.push(make_pair(0, make_pair(key[k][0], key[k][1])));
		testmap[key[k][0]][key[k][1]] = 1;
		while (!move.empty()) {
			int mvcount = move.front().first;
			int u = move.front().second.first;
			int v = move.front().second.second;
			move.pop();
			if (testmap[u - 1][v] != 1) {
				if (testmap[u - 1][v] > 1 && !itmoved[k][testmap[u - 1][v] - 1]) {
					itmoved[k][testmap[u - 1][v] - 1] = true;
					itmoved[testmap[u - 1][v] - 1][k] = true;
					keymove[k].push_back(make_pair(testmap[u - 1][v] - 1, mvcount + 1));
					keymove[testmap[u - 1][v] - 1].push_back(make_pair(k, mvcount + 1));
				}
				testmap[u - 1][v] = 1;
				move.push(make_pair(mvcount + 1, make_pair(u - 1, v)));
			}
			if (testmap[u + 1][v] != 1) {
				if (testmap[u + 1][v] > 1 && !itmoved[k][testmap[u + 1][v] - 1]) {
					itmoved[k][testmap[u + 1][v] - 1] = true;
					itmoved[testmap[u + 1][v] - 1][k] = true;
					keymove[k].push_back(make_pair(testmap[u + 1][v] - 1, mvcount + 1));
					keymove[testmap[u + 1][v] - 1].push_back(make_pair(k, mvcount + 1));
				}
				testmap[u + 1][v] = 1;
				move.push(make_pair(mvcount + 1, make_pair(u + 1, v)));
			}
			if (testmap[u][v - 1] != 1) {
				if (testmap[u][v - 1] > 1 && !itmoved[k][testmap[u][v - 1] - 1]) {
					itmoved[k][testmap[u][v - 1] - 1] = true;
					itmoved[testmap[u][v - 1] - 1][k] = true;
					keymove[k].push_back(make_pair(testmap[u][v - 1] - 1, mvcount + 1));
					keymove[testmap[u][v - 1] - 1].push_back(make_pair(k, mvcount + 1));
				}
				testmap[u][v - 1] = 1;
				move.push(make_pair(mvcount + 1, make_pair(u, v - 1)));
			}
			if (testmap[u][v + 1] != 1) {
				if (testmap[u][v + 1] > 1 && !itmoved[k][testmap[u][v + 1] - 1]) {
					itmoved[k][testmap[u][v + 1] - 1] = true;
					itmoved[testmap[u][v + 1] - 1][k] = true;
					keymove[k].push_back(make_pair(testmap[u][v + 1] - 1, mvcount + 1));
					keymove[testmap[u][v + 1] - 1].push_back(make_pair(k, mvcount + 1));
				}
				testmap[u][v + 1] = 1;
				move.push(make_pair(mvcount + 1, make_pair(u, v + 1)));
			}
		}
	}
	//mst
	int answer = 0;
	priority_queue<pair<int, int>> mstlink;
	for (int i = 0; i < keymove[0].size(); i++) {
		mstlink.push(make_pair(-1 * keymove[0].at(i).second, keymove[0].at(i).first));
	}
	mstlinked[0] = true;
	while (!mstlink.empty()) {
		int len = -1 * mstlink.top().first;
		int pnt = mstlink.top().second;
		mstlink.pop();
		if (!mstlinked[pnt]) {
			mstlinked[pnt] = true;
			answer += len;
			for (int i = 0; i < keymove[pnt].size(); i++) {
				int nxt = keymove[pnt].at(i).first;
				int nln = keymove[pnt].at(i).second;
				if (!mstlinked[nxt]) {
					mstlink.push(make_pair(-1 * nln, nxt));
				}
			}
		}
	}
	bool avail = true;
	for (int i = 0; i <= m; i++) {
		if (!mstlinked[i]) {
			avail = false;
		}
	}
	if (avail) {
		cout << answer;
	}
	else {
		cout << "-1";
	}
}