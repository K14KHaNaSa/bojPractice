#include <iostream>
#include <queue>
using namespace std;

int n, m, ou, ov;
bool map[10][10];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char mtype;
	cin >> n >> m;
	int rx, ry, bx, by;
	for (int i = 0; i < n; i++) {
		mtype = cin.get();
		for (int j = 0; j < m; j++) {
			mtype = cin.get();
			if (mtype == '#') {
				map[i][j] = false;
			}
			else {
				map[i][j] = true;
				if (mtype == 'R') {
					rx = i;
					ry = j;
				}
				else if (mtype == 'B') {
					bx = i;
					by = j;
				}
				else if (mtype == 'O') {
					ou = i;
					ov = j;
				}
			}
		}
	}
	bool answer = false;
	queue<pair<pair<pair<int, int>, pair<int, int>>, int>> move; // ( (red u, v), (blue u, v) ) , movecount
	move.push(make_pair(make_pair(make_pair(rx, ry), make_pair(bx, by)), 0));
	while (!move.empty() && !answer) {
		int ru = move.front().first.first.first;
		int rv = move.front().first.first.second;
		int bu = move.front().first.second.first;
		int bv = move.front().first.second.second;
		int mc = move.front().second;
		move.pop();
		//move up
		if (ru <= bu && !answer) { // move red first (up)
			bool redmove = true;
			bool bluemove = true;
			bool redin = false;
			bool bluein = false;
			int rmu = ru;
			int bmu = bu;
			while (redmove) {
				if (rmu - 1 == ou && rv == ov) {
					redin = true;
					rmu = 0;
					redmove = false;
				}
				else if (!map[rmu - 1][rv]) {
					redmove = false;
				}
				else {
					rmu--;
				}
			}
			while (bluemove) {
				if (bmu - 1 == ou && bv == ov) {
					bluein = true;
					bluemove = false;
				}
				else if (bmu - 1 == rmu && bv == rv) {
					bluemove = false;
				}
				else if (!map[bmu - 1][bv]) {
					bluemove = false;
				}
				else {
					bmu--;
				}
			}
			if (!bluein) {
				if (redin) {
					answer = true;
					while (!move.empty()) {
						move.pop();
					}
				}
				else if (mc < 9 && !(rmu==ru && bmu == bu)) {
					move.push(make_pair(make_pair(make_pair(rmu, rv), make_pair(bmu, bv)), mc + 1));
				}
			}
		}
		else if (!answer) { // move blue first (up)
			bool redmove = true;
			bool bluemove = true;
			bool redin = false;
			bool bluein = false;
			int rmu = ru;
			int bmu = bu;
			while (bluemove) {
				if (bmu - 1 == ou && bv == ov) {
					bluein = true;
					bmu = 0;
					bluemove = false;
				}
				else if (!map[bmu - 1][bv]) {
					bluemove = false;
				}
				else {
					bmu--;
				}
			}
			while (redmove) {
				if (rmu - 1 == ou && rv == ov) {
					redin = true;
					redmove = false;
				}
				else if (rmu - 1 == bmu && rv == bv) {
					redmove = false;
				}
				else if (!map[rmu - 1][rv]) {
					redmove = false;
				}
				else {
					rmu--;
				}
			}
			if (!bluein) {
				if (redin) {
					answer = true;
					while (!move.empty()) {
						move.pop();
					}
				}
				else if (mc < 9 && !(rmu == ru && bmu == bu)) {
					move.push(make_pair(make_pair(make_pair(rmu, rv), make_pair(bmu, bv)), mc + 1));
				}
			}
		}
		//move down
		if (ru >= bu && !answer) { // move red first (down)
			bool redmove = true;
			bool bluemove = true;
			bool redin = false;
			bool bluein = false;
			int rmu = ru;
			int bmu = bu;
			while (redmove) {
				if (rmu + 1 == ou && rv == ov) {
					redin = true;
					rmu = 0;
					redmove = false;
				}
				else if (!map[rmu + 1][rv]) {
					redmove = false;
				}
				else {
					rmu++;
				}
			}
			while (bluemove) {
				if (bmu + 1 == ou && bv == ov) {
					bluein = true;
					bluemove = false;
				}
				else if (bmu + 1 == rmu && bv == rv) {
					bluemove = false;
				}
				else if (!map[bmu + 1][bv]) {
					bluemove = false;
				}
				else {
					bmu++;
				}
			}
			if (!bluein) {
				if (redin) {
					answer = true;
					while (!move.empty()) {
						move.pop();
					}
				}
				else if (mc < 9 && !(rmu == ru && bmu == bu)) {
					move.push(make_pair(make_pair(make_pair(rmu, rv), make_pair(bmu, bv)), mc + 1));
				}
			}
		}
		else if (!answer) { // move blue first (down)
			bool redmove = true;
			bool bluemove = true;
			bool redin = false;
			bool bluein = false;
			int rmu = ru;
			int bmu = bu;
			while (bluemove) {
				if (bmu + 1 == ou && bv == ov) {
					bluein = true;
					bmu = 0;
					bluemove = false;
				}
				else if (!map[bmu + 1][bv]) {
					bluemove = false;
				}
				else {
					bmu++;
				}
			}
			while (redmove) {
				if (rmu + 1 == ou && rv == ov) {
					redin = true;
					redmove = false;
				}
				else if (rmu + 1 == bmu && rv == bv) {
					redmove = false;
				}
				else if (!map[rmu + 1][rv]) {
					redmove = false;
				}
				else {
					rmu++;
				}
			}
			if (!bluein) {
				if (redin) {
					answer = true;
					while (!move.empty()) {
						move.pop();
					}
				}
				else if (mc < 9 && !(rmu == ru && bmu == bu)) {
					move.push(make_pair(make_pair(make_pair(rmu, rv), make_pair(bmu, bv)), mc + 1));
				}
			}
		}
		//move left
		if (rv <= bv && !answer) { // move red first (left)
			bool redmove = true;
			bool bluemove = true;
			bool redin = false;
			bool bluein = false;
			int rmv = rv;
			int bmv = bv;
			while (redmove) {
				if (rmv - 1 == ov && ru == ou) {
					redin = true;
					rmv = 0;
					redmove = false;
				}
				else if (!map[ru][rmv - 1]) {
					redmove = false;
				}
				else {
					rmv--;
				}
			}
			while (bluemove) {
				if (bmv - 1 == ov && bu == ou) {
					bluein = true;
					bluemove = false;
				}
				else if (bmv - 1 == rmv && bu == ru) {
					bluemove = false;
				}
				else if (!map[bu][bmv - 1]) {
					bluemove = false;
				}
				else {
					bmv--;
				}
			}
			if (!bluein) {
				if (redin) {
					answer = true;
					while (!move.empty()) {
						move.pop();
					}
				}
				else if (mc < 9  && !(rmv == rv && bmv == bv)) {
					move.push(make_pair(make_pair(make_pair(ru, rmv), make_pair(bu, bmv)), mc + 1));
				}
			}
		}
		else if (!answer) { // move blue first (left)
			bool redmove = true;
			bool bluemove = true;
			bool redin = false;
			bool bluein = false;
			int rmv = rv;
			int bmv = bv;
			while (bluemove) {
				if (bmv - 1 == ov && bu == ou) {
					bluein = true;
					bmv = 0;
					bluemove = false;
				}
				else if (!map[bu][bmv - 1]) {
					bluemove = false;
				}
				else {
					bmv--;
				}
			}
			while (redmove) {
				if (rmv - 1 == ov && ru == ou) {
					redin = true;
					redmove = false;
				}
				else if (rmv - 1 == bmv && ru == bu) {
					redmove = false;
				}
				else if (!map[ru][rmv - 1]) {
					redmove = false;
				}
				else {
					rmv--;
				}
			}
			if (!bluein) {
				if (redin) {
					answer = true;
					while (!move.empty()) {
						move.pop();
					}
				}
				else if (mc < 9 && !(rmv == rv && bmv == bv)) {
					move.push(make_pair(make_pair(make_pair(ru, rmv), make_pair(bu, bmv)), mc + 1));
				}
			}
		}
		//move right
		if (rv >= bv && !answer) { // move red first (right)
			bool redmove = true;
			bool bluemove = true;
			bool redin = false;
			bool bluein = false;
			int rmv = rv;
			int bmv = bv;
			while (redmove) {
				if (rmv + 1 == ov && ru == ou) {
					redin = true;
					rmv = 0;
					redmove = false;
				}
				else if (!map[ru][rmv + 1]) {
					redmove = false;
				}
				else {
					rmv++;
				}
			}
			while (bluemove) {
				if (bmv + 1 == ov && bu == ou) {
					bluein = true;
					bluemove = false;
				}
				else if (bmv + 1 == rmv && bu == ru) {
					bluemove = false;
				}
				else if (!map[bu][bmv + 1]) {
					bluemove = false;
				}
				else {
					bmv++;
				}
			}
			if (!bluein) {
				if (redin) {
					answer = true;
					while (!move.empty()) {
						move.pop();
					}
				}
				else if (mc < 9 && !(rmv == rv && bmv == bv)) {
					move.push(make_pair(make_pair(make_pair(ru, rmv), make_pair(bu, bmv)), mc + 1));
				}
			}
		}
		else if (!answer) { // move blue first (right)
			bool redmove = true;
			bool bluemove = true;
			bool redin = false;
			bool bluein = false;
			int rmv = rv;
			int bmv = bv;
			while (bluemove) {
				if (bmv + 1 == ov && bu == ou) {
					bluein = true;
					bmv = 0;
					bluemove = false;
				}
				else if (!map[bu][bmv + 1]) {
					bluemove = false;
				}
				else {
					bmv++;
				}
			}
			while (redmove) {
				if (rmv + 1 == ov && ru == ou) {
					redin = true;
					redmove = false;
				}
				else if (rmv + 1 == bmv && ru == bu) {
					redmove = false;
				}
				else if (!map[ru][rmv + 1]) {
					redmove = false;
				}
				else {
					rmv++;
				}
			}
			if (!bluein) {
				if (redin) {
					answer = true;
					while (!move.empty()) {
						move.pop();
					}
				}
				else if (mc < 9 && !(rmv == rv && bmv == bv)) {
					move.push(make_pair(make_pair(make_pair(ru, rmv), make_pair(bu, bmv)), mc + 1));
				}
			}
		}
	}
	if (answer) {
		cout << "1";
	}
	else {
		cout << "0";
	}
}