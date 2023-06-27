#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int map[10][10];
vector<pair<int, int>> bridg[6];
bool linked[7];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	//input mapdata
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
		}
	}
	// group island
	int islands = 2; // map[][] 2 = island#1 ~ (max)7 = #6
	queue<pair<int, int>> oneland;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (map[i][j] == 1) {
				oneland.push(make_pair(i, j));
				map[i][j] = islands;
				while (!oneland.empty()) {
					int u = oneland.front().first;
					int v = oneland.front().second;
					oneland.pop();
					if (u > 0) {
						if (map[u - 1][v] == 1) {
							oneland.push(make_pair(u - 1, v));
							map[u - 1][v] = islands;
						}
					}
					if (u < n - 1) {
						if (map[u + 1][v] == 1) {
							oneland.push(make_pair(u + 1, v));
							map[u + 1][v] = islands;
						}
					}
					if (v > 0) {
						if (map[u][v - 1] == 1) {
							oneland.push(make_pair(u, v - 1));
							map[u][v - 1] = islands;
						}
					}
					if (v < m - 1) {
						if (map[u][v + 1] == 1) {
							oneland.push(make_pair(u, v + 1));
							map[u][v + 1] = islands;
						}
					}
				}
				islands++;
			}
		}
	}
	// build bridge
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (map[i][j] > 1) {
				int from = map[i][j] - 2;
				if (i > 0) {
					if (map[i - 1][j] == 0) {
						// up
						int bridgelength = 1;
						int u = i - 1;
						bool newland = false;
						while (!newland && u > 0) {
							if (map[u - 1][j] == 0) {
								u--;
								bridgelength++;
							}
							else {
								if (map[u - 1][j] - 2 != from) {
									if (bridgelength > 1) {
										int to = map[u - 1][j] - 2;
										bridg[from].push_back(make_pair(to, bridgelength));
										bridg[to].push_back(make_pair(from, bridgelength));
									}
								}
								newland = true;
							}
						}
					}
				}
				if (i < n - 1) {
					if (map[i + 1][j] == 0) {
						// up
						int bridgelength = 1;
						int u = i + 1;
						bool newland = false;
						while (!newland && u < n - 1) {
							if (map[u + 1][j] == 0) {
								u++;
								bridgelength++;
							}
							else {
								if (map[u + 1][j] - 2 != from) {
									if (bridgelength > 1) {
										int to = map[u + 1][j] - 2;
										bridg[from].push_back(make_pair(to, bridgelength));
										bridg[to].push_back(make_pair(from, bridgelength));
									}
								}
								newland = true;
							}
						}
					}
				}
				if (j > 0) {
					if (map[i][j - 1] == 0) {
						// up
						int bridgelength = 1;
						int v = j - 1;
						bool newland = false;
						while (!newland && v > 0) {
							if (map[i][v - 1] == 0) {
								v--;
								bridgelength++;
							}
							else {
								if (map[i][v - 1] - 2 != from) {
									if (bridgelength > 1) {
										int to = map[i][v - 1] - 2;
										bridg[from].push_back(make_pair(to, bridgelength));
										bridg[to].push_back(make_pair(from, bridgelength));
									}
								}
								newland = true;
							}
						}
					}
				}
				if (j < m - 1) {
					if (map[i][j + 1] == 0) {
						// up
						int bridgelength = 1;
						int v = j + 1;
						bool newland = false;
						while (!newland && v < m - 1) {
							if (map[i][v + 1] == 0) {
								v++;
								bridgelength++;
							}
							else {
								if (map[i][v + 1] - 2 != from) {
									if (bridgelength > 1) {
										int to = map[i][v + 1] - 2;
										bridg[from].push_back(make_pair(to, bridgelength));
										bridg[to].push_back(make_pair(from, bridgelength));
									}
								}
								newland = true;
							}
						}
					}
				}
			}
		}
	}
	// mst
	int answer = 0;
	linked[0] = true; // start from 0
	for (int i = 1; i < islands - 2; i++) {
		linked[i] = false;
	}
	priority_queue<pair<int, int>> buildit;
	for (int i = 0; i < bridg[0].size(); i++) {
		buildit.push(make_pair(-1 * bridg[0].at(i).second, bridg[0].at(i).first));
	}
	while (!buildit.empty()) {
		int bl = -1 * buildit.top().first;
		int nland = buildit.top().second;
		buildit.pop();
		if (!linked[nland]) {
			answer += bl;
			linked[nland] = true;
			for (int i = 0; i < bridg[nland].size(); i++) {
				int nextland = bridg[nland].at(i).first;
				int b = bridg[nland].at(i).second;
				if (!linked[nextland]) {
					buildit.push(make_pair(-1 * b, nextland));
				}
			}
		}
	}
	bool allconnected = true;
	for (int i = 1; i < islands - 2; i++) {
		if (!linked[i]) {
			allconnected = false;
		}
	}
	if (allconnected) {
		cout << answer;
	}
	else {
		cout << "-1";
	}
}