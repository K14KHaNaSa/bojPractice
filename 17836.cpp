#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> step(100,vector<int>(100));
int n, m;
queue<pair<int, int>> moving;
bool gram = false;
int gramx, gramy;

void escape(int x, int y) {
	moving.push(pair<int, int>(x, y));
	step[x][y] = 0;
	while (!moving.empty()) {
		int x = moving.front().first;
		int y = moving.front().second;
		moving.pop();
		if (x < n - 1) {
			if (step[x + 1][y] == 0 && !(x + 1 == 0 && y == 0)) {
				moving.push(pair<int, int>(x + 1, y));
				step[x + 1][y] = step[x][y] + 1;
			}
			if (step[x + 1][y] == -2 && !gram) {
				gram = true;
				step[x + 1][y] = step[x][y] + 1;
				moving.push(pair<int, int>(x + 1, y));
			}
		}
		if (y < m - 1) {
			if (step[x][y + 1] == 0 && !(x == 0 && y + 1 == 0)) {
				moving.push(pair<int, int>(x, y + 1));
				step[x][y + 1] = step[x][y] + 1;
			}
			if (step[x][y + 1] == -2 && !gram) {
				gram = true;
				step[x][y + 1] = step[x][y] + 1;
				moving.push(pair<int, int>(x, y + 1));
			}
		}
		if (x > 0) {
			if (step[x - 1][y] == 0 && !(x - 1 == 0 && y == 0)) {
				moving.push(pair<int, int>(x - 1, y));
				step[x - 1][y] = step[x][y] + 1;
			}
			if (step[x - 1][y] == -2 && !gram) {
				gram = true;
				step[x - 1][y] = step[x][y] + 1;
				moving.push(pair<int, int>(x - 1, y));
			}
		}
		if (y > 0) {
			if (step[x][y - 1] == 0 && !(x == 0 && y - 1 == 0)) {
				moving.push(pair<int, int>(x, y - 1));
				step[x][y - 1] = step[x][y] + 1;
			}
			if (step[x][y - 1] == -2 && !gram) {
				gram = true;
				step[x][y - 1] = step[x][y] + 1;
				moving.push(pair<int, int>(x, y - 1));
			}
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	int areatype;
	int t;
	cin >> n >> m >> t;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> areatype;
			if (areatype == 0) {
				step[i][j] = 0;
			}
			else if (areatype == 1) {
				step[i][j] = -1;
			}
			else if (areatype == 2) {
				step[i][j] = -2;
				gramx = i;
				gramy = j;
			}
		}
	}
	escape(0, 0);
	int fin = step[n - 1][m - 1];
	int gramtime;
	if (gram) {
		gramtime = step[gramx][gramy] + (n - 1) - gramx + (m - 1) - gramy;
	}
	if (!fin) {
		if (!gram) {
			cout << "Fail";
		}
		else {
			if (gramtime <= t) {
				cout << gramtime;
			}
			else {
				cout << "Fail";
			}
		}
	}
	else {
		if (gram) {
			fin = min(fin, gramtime);
		}
		if (fin > t) {
			cout << "Fail";
		}
		else {
			cout << fin;
		}
	}
}