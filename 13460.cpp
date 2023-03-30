#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int n, m;
int map[10][10]; // 0 = '.' / 1 = 'O' / 9 = '#'

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int ru, rv, bu, bv;
	char mapdata;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		mapdata = cin.get();
		for (int j = 0; j < m; j++) {
			mapdata = cin.get();
			if (mapdata == '#') {
				map[i][j] = 9;
			}
			else if (mapdata == 'O') {
				map[i][j] = 1;
			}
			else {
				map[i][j] = 0;
				if (mapdata == 'R') {
					ru = i;
					rv = j;
				}
				else if (mapdata == 'B') {
					bu = i;
					bv = j;
				}
			}
		}
	}
	queue<tuple<int, pair<int, int>, pair<int, int>>> move; // movecount, (ru, rv), (bu, bv)
	move.push(make_tuple(0, make_pair(ru, rv), make_pair(bu, bv)));
	int answer = 11;
	while (!move.empty()) {
		//data load
		int movecount = get<0>(move.front());
		int redu = get<1>(move.front()).first;
		int redv = get<1>(move.front()).second;
		int blueu = get<2>(move.front()).first;
		int bluev = get<2>(move.front()).second;
		move.pop();
		//move up
		if (answer > 10) {
			bool redgoal = false;
			bool bluegoal = false;
			int redstop = redu;
			int bluestop = blueu;
			if (redu < blueu) {
				//red up
				for (int i = redu - 1; i >= 0; i--) {
					if (map[i][redv] == 1) {
						redgoal = true;
						break;
					}
					else if (map[i][redv] == 9) {
						redstop = i + 1;
						break;
						// red = map[redstop][redv]
					}
				}
				//blue up
				for (int i = blueu - 1; i >= 0; i--) {
					if (map[i][bluev] == 1) {
						bluegoal = true;
						break;
					}
					else if (map[i][bluev] == 9) {
						bluestop = i + 1;
						break;
						// blue = map[bluestop][bluev]
					}
					else if (redv == bluev && redstop == i) {
						bluestop = i + 1;
						if (redgoal) {
							bluegoal = true;
						}
						break;
					}
				}
			}
			else {
				//blue up
				for (int i = blueu - 1; i >= 0; i--) {
					if (map[i][bluev] == 1) {
						bluegoal = true;
						break;
					}
					else if (map[i][bluev] == 9) {
						bluestop = i + 1;
						break;
						// blue = map[bluestop][bluev]
					}
				}
				//red up
				for (int i = redu - 1; i >= 0; i--) {
					if (map[i][redv] == 1) {
						redgoal = true;
						break;
					}
					else if (map[i][redv] == 9) {
						redstop = i + 1;
						break;
						// red = map[redstop][redv]
					}
					else if (redv == bluev && bluestop == i) {
						redstop = i + 1;
						break;
					}
				}
			}
			if (!bluegoal) {
				if (redgoal) {
					answer = movecount + 1;
					while (!move.empty()) {
						move.pop();
					}
				}
				else if (movecount < 9 && !(redstop==redu && bluestop==blueu)) {
					move.push(make_tuple(movecount + 1, make_pair(redstop, redv), make_pair(bluestop, bluev)));
				}
			}
		}
		//move down
		if (answer > 10) {
			bool redgoal = false;
			bool bluegoal = false;
			int redstop = redu;
			int bluestop = blueu;
			if (redu > blueu) {
				//red down
				for (int i = redu + 1; i < n; i++) {
					if (map[i][redv] == 1) {
						redgoal = true;
						break;
					}
					else if (map[i][redv] == 9) {
						redstop = i - 1;
						break;
						// red = map[redstop][redv]
					}
				}
				//blue down
				for (int i = blueu + 1; i < n; i++) {
					if (map[i][bluev] == 1) {
						bluegoal = true;
						break;
					}
					else if (map[i][bluev] == 9) {
						bluestop = i - 1;
						break;
						// blue = map[bluestop][bluev]
					}
					else if (redv == bluev && redstop == i) {
						bluestop = i - 1;
						if (redgoal) {
							bluegoal = true;
						}
						break;
					}
				}
			}
			else {
				//blue down
				for (int i = blueu + 1; i < n; i++) {
					if (map[i][bluev] == 1) {
						bluegoal = true;
						break;
					}
					else if (map[i][bluev] == 9) {
						bluestop = i - 1;
						break;
						// blue = map[bluestop][bluev]
					}
				}
				//red down
				for (int i = redu + 1; i < n; i++) {
					if (map[i][redv] == 1) {
						redgoal = true;
						break;
					}
					else if (map[i][redv] == 9) {
						redstop = i - 1;
						break;
						// red = map[redstop][redv]
					}
					else if (redv == bluev && bluestop == i) {
						redstop = i - 1;
						break;
					}
				}
			}
			if (!bluegoal) {
				if (redgoal) {
					answer = movecount + 1;
					while (!move.empty()) {
						move.pop();
					}
				}
				else if (movecount < 9 && !(redstop == redu && bluestop == blueu)) {
					move.push(make_tuple(movecount + 1, make_pair(redstop, redv), make_pair(bluestop, bluev)));
				}
			}
		}
		//move left
		if (answer > 10) {
			bool redgoal = false;
			bool bluegoal = false;
			int redstop = redv;
			int bluestop = bluev;
			if (redv < bluev) {
				//red left
				for (int j = redv - 1; j >= 0; j--) {
					if (map[redu][j] == 1) {
						redgoal = true;
						break;
					}
					else if (map[redu][j] == 9) {
						redstop = j + 1;
						break;
						// red = map[redstop][redv]
					}
				}
				//blue left
				for (int j = bluev - 1; j >= 0; j--) {
					if (map[blueu][j] == 1) {
						bluegoal = true;
						break;
					}
					else if (map[blueu][j] == 9) {
						bluestop = j + 1;
						break;
						// blue = map[bluestop][bluev]
					}
					else if (redu == blueu && redstop == j) {
						bluestop = j + 1;
						if (redgoal) {
							bluegoal = true;
						}
						break;
					}
				}
			}
			else {
				//blue left
				for (int j = bluev - 1; j >= 0; j--) {
					if (map[blueu][j] == 1) {
						bluegoal = true;
						break;
					}
					else if (map[blueu][j] == 9) {
						bluestop = j + 1;
						break;
						// blue = map[bluestop][bluev]
					}
				}
				//red left
				for (int j = redv - 1; j >= 0; j--) {
					if (map[redu][j] == 1) {
						redgoal = true;
						break;
					}
					else if (map[redu][j] == 9) {
						redstop = j + 1;
						break;
						// red = map[redstop][redv]
					}
					else if (redu == blueu && bluestop == j) {
						redstop = j + 1;
						break;
					}
				}
				
			}
			if (!bluegoal) {
				if (redgoal) {
					answer = movecount + 1;
					while (!move.empty()) {
						move.pop();
					}
				}
				else if (movecount < 9 && !(redstop == redv && bluestop == bluev)) {
					move.push(make_tuple(movecount + 1, make_pair(redu, redstop), make_pair(blueu, bluestop)));
				}
			}
		}
		//move right
		if (answer > 10) {
			bool redgoal = false;
			bool bluegoal = false;
			int redstop = redv;
			int bluestop = bluev;
			if (redv > bluev) {
				//red right
				for (int j = redv + 1; j < m; j++) {
					if (map[redu][j] == 1) {
						redgoal = true;
						break;
					}
					else if (map[redu][j] == 9) {
						redstop = j - 1;
						break;
						// red = map[redstop][redv]
					}
				}
				//blue right
				for (int j = bluev + 1; j < m; j++) {
					if (map[blueu][j] == 1) {
						bluegoal = true;
						break;
					}
					else if (map[blueu][j] == 9) {
						bluestop = j - 1;
						break;
						// blue = map[bluestop][bluev]
					}
					else if (redu == blueu && redstop == j) {
						bluestop = j - 1;
						if (redgoal) {
							bluegoal = true;
						}
						break;
					}
				}
			}
			else {
				//blue right
				for (int j = bluev + 1; j < m; j++) {
					if (map[blueu][j] == 1) {
						bluegoal = true;
						break;
					}
					else if (map[blueu][j] == 9) {
						bluestop = j - 1;
						break;
						// blue = map[bluestop][bluev]
					}
				}
				//red right
				for (int j = redv + 1; j < m; j++) {
					if (map[redu][j] == 1) {
						redgoal = true;
						break;
					}
					else if (map[redu][j] == 9) {
						redstop = j - 1;
						break;
						// red = map[redstop][redv]
					}
					else if (redu == blueu && bluestop == j) {
						redstop = j - 1;
						break;
					}
				}
			}
			if (!bluegoal) {
				if (redgoal) {
					answer = movecount + 1;
					while (!move.empty()) {
						move.pop();
					}
				}
				else if (movecount < 9 && !(redstop == redv && bluestop == bluev)) {
					move.push(make_tuple(movecount + 1, make_pair(redu, redstop), make_pair(blueu, bluestop)));
				}
			}
		}
	}
	if (answer > 10) {
		cout << "-1";
	}
	else {
		cout << answer;
	}
}