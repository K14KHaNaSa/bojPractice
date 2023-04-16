#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int k;
	cin >> k;
	deque<pair<int, int>> ls;
	int dir, l;
	vector<int> sf(4, 0); // shapefinder
	for (int i = 0; i < 6; i++) {
		cin >> dir >> l;
		ls.push_back(make_pair(dir, l));
		sf[dir - 1]++;
	}
	while (!(ls.front().first == 4 && ls.back().first == 1)) {
		ls.push_back(make_pair(ls.front().first, ls.front().second));
		ls.pop_front();
	}
	int a, b, la, lb;
	if (sf[0] == 2) { // going east
		if (sf[2] == 2) {
			// +4 +2 3 [1 3] 1
			// ぁ
			a = ls.front().second;
			ls.pop_front();
			b = ls.front().second;
			ls.pop_front();
			ls.pop_front();
			la = ls.front().second;
			ls.pop_front();
			lb = ls.front().second;
		}
		else if (sf[3] == 2) {
			// [4 1] 4 +2 +3 1
			// 4 +2 +3 1 [4 1]
			// 谅快 第笼腮 ぁ
			la = ls.front().second;
			ls.pop_front();
			if (ls.front().first == 1) {
				// 1] 4 +2 +3 1
				lb = ls.front().second;
				ls.pop_back();
				a = ls.back().second;
				ls.pop_back();
				b = ls.back().second;
			}
			else {
				// +2 +3 1 [4 1]
				la = ls.back().second;
				ls.pop_back();
				lb = ls.back().second;
				a = ls.front().second;
				ls.pop_front();
				b = ls.front().second;
			}
		}
	}
	else if (sf[1] == 2) {
		if (sf[2] == 2) {
			// +4 2 [3 2] 3 +1
			// 谅快 第笼腮 い
			a = ls.front().second;
			b = ls.back().second;
			ls.pop_back();
			ls.pop_back();
			la = ls.back().second;
			ls.pop_back();
			lb = ls.back().second;
		}
		else if (sf[3] == 2) {
			// 4 [2 4] 2 +3 +1
			// い
			a = ls.back().second;
			ls.pop_back();
			b = ls.back().second;
			ls.pop_front();
			la = ls.front().second;
			ls.pop_front();
			lb = ls.front().second;
		}
	}
	cout << ((a * b) - (la * lb)) * k;
}