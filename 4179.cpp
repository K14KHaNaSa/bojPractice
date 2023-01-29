#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int maze[1000][1000];
int jfmove[1000][1000] = { 0, };
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int r, c;
	cin >> r >> c;
	// wall = 9 / empty = 0 / J = 1 / F = 2
	queue<pair<int, int>> move;
	queue<pair<int, int>> movetemp;
	queue<pair<int, int>> fire;
	queue<pair<int, int>> firetemp;
	char areatype;
	areatype = cin.get();
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			areatype = cin.get();
			if (areatype == '#') {
				maze[i][j] = 9;
			}
			else if (areatype == '.') {
				maze[i][j] = 0;
			}
			else if (areatype == 'J') {
				maze[i][j] = 1;
				move.push(make_pair(i, j));
			}
			else if (areatype == 'F') {
				maze[i][j] = 2;
				fire.push(make_pair(i, j));
			}
		}
		areatype = cin.get();
	}
	bool escape = false;
	int answer = 2001;
	while (!move.empty() && movetemp.empty()) {
		while (!move.empty()) {
			int jr = move.front().first;
			int jc = move.front().second;
			move.pop();
			if ((jr == 0 || jr == r - 1 || jc == 0 || jc == c - 1) && maze[jr][jc] == 1) {
				escape = true;
				answer = min(answer, jfmove[jr][jc] + 1);
				while (!move.empty()) {
					move.pop();
				}
				while (!movetemp.empty()) {
					movetemp.pop();
				}
				while (!fire.empty()) {
					fire.pop();
				}
			}
			else if (maze[jr][jc] == 1) {
				if (maze[jr + 1][jc] == 0) {
					jfmove[jr + 1][jc] = jfmove[jr][jc] + 1;
					maze[jr + 1][jc] = 1;
					movetemp.push(make_pair(jr + 1, jc));
				}
				if (maze[jr - 1][jc] == 0) {
					jfmove[jr - 1][jc] = jfmove[jr][jc] + 1;
					maze[jr - 1][jc] = 1;
					movetemp.push(make_pair(jr - 1, jc));
				}
				if (maze[jr][jc + 1] == 0) {
					jfmove[jr][jc + 1] = jfmove[jr][jc] + 1;
					maze[jr][jc + 1] = 1;
					movetemp.push(make_pair(jr, jc + 1));
				}
				if (maze[jr][jc - 1] == 0) {
					jfmove[jr][jc - 1] = jfmove[jr][jc] + 1;
					maze[jr][jc - 1] = 1;
					movetemp.push(make_pair(jr, jc - 1));
				}
			}
		}
		while (!fire.empty()) {
			int fr = fire.front().first;
			int fc = fire.front().second;
			fire.pop();
			if (fr > 0) {
				if (maze[fr - 1][fc] == 0 || maze[fr - 1][fc] == 1) {
					maze[fr - 1][fc] = 2;
					firetemp.push(make_pair(fr - 1, fc));
				}
			}
			if (fr < r - 1) {
				if (maze[fr + 1][fc] == 0 || maze[fr + 1][fc] == 1) {
					maze[fr + 1][fc] = 2;
					firetemp.push(make_pair(fr + 1, fc));
				}
			}
			if (fc > 0) {
				if (maze[fr][fc - 1] == 0 || maze[fr][fc - 1] == 1) {
					maze[fr][fc - 1] = 2;
					firetemp.push(make_pair(fr, fc - 1));
				}
			}
			if (fc < c - 1) {
				if (maze[fr][fc + 1] == 0 || maze[fr][fc + 1] == 1) {
					maze[fr][fc + 1] = 2;
					firetemp.push(make_pair(fr, fc + 1));
				}
			}
		}
		while (!movetemp.empty()) {
			move.push(make_pair(movetemp.front().first, movetemp.front().second));
			movetemp.pop();
		}
		while (!firetemp.empty()) {
			fire.push(make_pair(firetemp.front().first, firetemp.front().second));
			firetemp.pop();
		}
	}

	if (!escape) {
		cout << "IMPOSSIBLE";
	}
	else {
		cout << answer;
	}
}