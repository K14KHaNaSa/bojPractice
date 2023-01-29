#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int maze[1000][1000];
int mapmove[1000][1000];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, w, h;
	cin >> t;
	for (int k = 0; k < t; k++) {
		cin >> w >> h;
		// wall = 9 / empty = 0 / @ = 1 / * = 2
		queue<pair<int, int>> move;
		queue<pair<int, int>> movetemp;
		queue<pair<int, int>> fire;
		queue<pair<int, int>> firetemp;
		char areatype;
		for (int i = 0; i < h; i++) {
			areatype = cin.get();
			for (int j = 0; j < w; j++) {
				areatype = cin.get();
				if (areatype == '#') {
					maze[i][j] = 9;
				}
				else if (areatype == '.') {
					maze[i][j] = 0;
				}
				else if (areatype == '@') {
					maze[i][j] = 1;
					move.push(make_pair(i, j));
				}
				else if (areatype == '*') {
					maze[i][j] = 2;
					fire.push(make_pair(i, j));
				}
				mapmove[i][j] = 0;
			}
		}
		bool escape = false;
		int answer = 10000001;
		while (!move.empty() && movetemp.empty()) {
			while (!move.empty()) {
				int jr = move.front().first;
				int jc = move.front().second;
				move.pop();
				if ((jr == 0 || jr == h - 1 || jc == 0 || jc == w - 1) && maze[jr][jc] == 1) {
					escape = true;
					answer = min(answer, mapmove[jr][jc] + 1);
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
						mapmove[jr + 1][jc] = mapmove[jr][jc] + 1;
						maze[jr + 1][jc] = 1;
						movetemp.push(make_pair(jr + 1, jc));
					}
					if (maze[jr - 1][jc] == 0) {
						mapmove[jr - 1][jc] = mapmove[jr][jc] + 1;
						maze[jr - 1][jc] = 1;
						movetemp.push(make_pair(jr - 1, jc));
					}
					if (maze[jr][jc + 1] == 0) {
						mapmove[jr][jc + 1] = mapmove[jr][jc] + 1;
						maze[jr][jc + 1] = 1;
						movetemp.push(make_pair(jr, jc + 1));
					}
					if (maze[jr][jc - 1] == 0) {
						mapmove[jr][jc - 1] = mapmove[jr][jc] + 1;
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
				if (fr < h - 1) {
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
				if (fc < w - 1) {
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
			cout << "IMPOSSIBLE\n";
		}
		else {
			cout << answer << "\n";
		}
	}	
}