#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n;
int visit[20000];
vector<pair<int, int>> es[20000];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int e, k, a, b, c;
	cin >> n >> e;
	cin >> k;
	for (int i = 0; i < n; i++) {
		visit[i] = 2000000001;
	}
	while (e--) {
		cin >> a >> b >> c;
		es[a - 1].push_back(make_pair(b - 1, c));
	}
	visit[k - 1] = 0;
	priority_queue<pair<int, int>> move; // distance , target
	// dijk
	move.push(make_pair(0, k - 1));
	while (!move.empty()) {
		int d = -1 * move.top().first;
		int t = move.top().second;
		move.pop();
		if (d <= visit[t]) {
			for (int i = 0; i < es[t].size(); i++) {
				int nextv = es[t].at(i).first;
				int nextd = es[t].at(i).second;
				if (d + nextd < visit[nextv]) {
					visit[nextv] = d + nextd;
					move.push(make_pair(-1 * (d + nextd), nextv));
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (k - 1 == i) {
			cout << "0\n";
		}
		else if (visit[i] > 2000000000) {
			cout << "INF\n";
		}
		else {
			cout << visit[i] << "\n";
		}
	}
}