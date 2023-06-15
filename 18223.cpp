#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int v, p;
vector<pair<int, int>> e[5000];
int d[5000][2];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int es, a, b, c;
	cin >> v >> es >> p;
	while (es--) {
		cin >> a >> b >> c;
		e[a - 1].push_back(make_pair(b - 1, c));
		e[b - 1].push_back(make_pair(a - 1, c));
	}
	int sv[2] = { 0, p - 1 }; //{from 1, from p}
	for (int i = 0; i < v; i++) {
		d[i][0] = 2000000001;
		d[i][1] = 2000000001;
	}
	priority_queue<pair<int, int>> move;
	for (int mg = 0; mg < 2; mg++) {
		d[sv[mg]][mg] = 0;
		move.push(make_pair(0, sv[mg]));
		while (!move.empty()) {
			int nd = -1 * move.top().first;
			int nv = move.top().second;
			move.pop();
			if (d[nv][mg] <= nd) {
				for (int i = 0; i < e[nv].size(); i++) {
					int tv = e[nv].at(i).first;
					int td = e[nv].at(i).second;
					if (nd + td < d[tv][mg]) {
						d[tv][mg] = nd + td;
						move.push(make_pair(-1 * (nd + td), tv));
					}
				}
			}
		}
	}
	if (d[p - 1][0] + d[v - 1][1] == d[v - 1][0]) {
		cout << "SAVE HIM";
	}
	else {
		cout << "GOOD BYE";
	}
}