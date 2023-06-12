#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, x;
int fromx[1000];
int tox[1000];
vector<pair<int, int>> fxe[1000];
vector<pair<int, int>> txe[1000];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int m, a, b, c;
	cin >> n >> m >> x;
	while (m--) {
		cin >> a >> b >> c;
		fxe[a - 1].push_back(make_pair(b - 1, c));
		txe[b - 1].push_back(make_pair(a - 1, c));
	}
	for (int i = 0; i < n; i++) {
		fromx[i] = 2000000001;
		tox[i] = 2000000001;
	}
	priority_queue<pair<int, int>> move;
	// from x to 1~N
	fromx[x - 1] = 0;
	move.push(make_pair(0, x - 1));
	while (!move.empty()) {
		int d = -1 * move.top().first;
		int v = move.top().second;
		move.pop();
		if (d <= fromx[v]) {
			for (int i = 0; i < fxe[v].size(); i++) {
				int tv = fxe[v].at(i).first; // target vertex
				int td = fxe[v].at(i).second;
				if (td + d < fromx[tv]) {
					fromx[tv] = td + d;
					move.push(make_pair(-1 * (td + d), tv));
				}
			}
		}
	}
	// from 1~N to x (reverse x <-- 1~N)
	tox[x - 1] = 0;
	move.push(make_pair(0, x - 1));
	while (!move.empty()) {
		int d = -1 * move.top().first;
		int v = move.top().second;
		move.pop();
		if (d <= tox[v]) {
			for (int i = 0; i < txe[v].size(); i++) {
				int tv = txe[v].at(i).first; // target vertex
				int td = txe[v].at(i).second;
				if (td + d < tox[tv]) {
					tox[tv] = td + d;
					move.push(make_pair(-1 * (td + d), tv));
				}
			}
		}
	}
	int answer = fromx[0] + tox[0];
	for (int i = 1; i < n; i++) {
		answer = max(answer, fromx[i] + tox[i]);
	}
	cout << answer;
}