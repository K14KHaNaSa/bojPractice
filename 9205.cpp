#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> cvs(100, vector<int>(2));
vector<bool> visit(100);
int n;
queue<pair<int, int>> moving;
int homex, homey, rockx, rocky;
bool answer;

void move(int x, int y) {
	moving.push(pair<int, int>(x, y));
	while (!moving.empty()) {
		int nowx = moving.front().first;
		int nowy = moving.front().second;
		moving.pop();
		if (abs(nowx - rockx) + abs(nowy - rocky) <= 1000) {
			answer = true;
		}
		for (int i = 0; i < n; i++) {
			if (abs(cvs[i][0] - nowx) + abs(cvs[i][1] - nowy) <= 1000 && visit[i] == false) {
				visit[i] = true;
				moving.push(pair<int, int>(cvs[i][0], cvs[i][1]));
			}
		}
		if (answer) {
			while (!moving.empty()) {
				moving.pop();
			}
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		answer = false;
		cin >> n >> homex >> homey;
		for (int j = 0; j < n; j++) {
			cin >> cvs[j][0] >> cvs[j][1];
			visit[j] = false;
		}
		cin >> rockx >> rocky;
		move(homex, homey);
		if (answer) {
			cout << "happy\n";
		}
		else {
			cout << "sad\n";
		}
	}
}