#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool visit[100001];
vector<pair<int, int>> edg[100001]; // { dest , cost }

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long int all_cost, min_cost, n, m, a, b, c;
	all_cost = 0;
	min_cost = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		visit[i] = false;
	while (m--) {
		cin >> a >> b >> c;
		edg[a].push_back(make_pair(b, c));
		edg[b].push_back(make_pair(a, c));
		all_cost += c;
	}
	priority_queue<pair<int, int>> lnk; // { cost * -1 , dest }
	for (int i = 0; i < edg[1].size(); i++)
		lnk.push(make_pair(edg[1][i].second * -1, edg[1][i].first));
	visit[1] = true; // start from building #1
	while (!lnk.empty()) {
		int cost = lnk.top().first * -1;
		int dest = lnk.top().second;
		if (!visit[dest]) {
			lnk.pop();
			min_cost += cost;
			visit[dest] = true;
			for (int i = 0; i < edg[dest].size(); i++)
				lnk.push(make_pair(edg[dest][i].second * -1, edg[dest][i].first));
		}
		else
			lnk.pop();
	}
	bool all_linked = true;
	for (int i = 1; i <= n; i++) {
		if (!visit[i]) {
			all_linked = false;
			break;
		}
	}
	all_linked ? cout << all_cost - min_cost : cout << -1;
}