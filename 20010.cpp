#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int maxans;
bool visit[1000][2]; // { min , max }
vector<pair<int, int>> road[1000]; // { to, dist }
vector<pair<int, int>> mstroad[1000];

void bt(int town, int lengthsum) {
	bool nextexist = false;
	for (int i = 0; i < mstroad[town].size(); i++) {
		int nexttarget = mstroad[town].at(i).first;
		if (!visit[nexttarget][1]) {
			nextexist = true;
			visit[nexttarget][1] = true;
			bt(nexttarget, lengthsum + mstroad[town].at(i).second);
			visit[nexttarget][1] = false;
		}
	}
	if (!nextexist) {
		maxans = max(maxans, lengthsum);
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k, a, b, c;
	cin >> n >> k;
	for (int i = 1; i < n; i++) {
		visit[i][0] = false;
		visit[i][1] = false;
	}
	while (k--) {
		cin >> a >> b >> c;
		road[a].push_back(make_pair(b, c));
		road[b].push_back(make_pair(a, c));
	}
	priority_queue<pair<int, pair<int, int>>> minroad;
	for (int i = 0; i < road[0].size(); i++) {
		minroad.push(make_pair(-1 * road[0].at(i).second, make_pair(0, road[0].at(i).first)));
	}
	visit[0][0] = true;
	int minans = 0;
	maxans = 0;
	while (!minroad.empty()) {
		int cost = -1 * minroad.top().first;
		int from = minroad.top().second.first;
		int town = minroad.top().second.second;
		minroad.pop();
		if (!visit[town][0]) {
			visit[town][0] = true;
			minans += cost;
			mstroad[from].push_back(make_pair(town, cost));
			mstroad[town].push_back(make_pair(from, cost));
			for (int i = 0; i < road[town].size(); i++) {
				int target = road[town].at(i).first;
				int ncost = road[town].at(i).second;
				if (!visit[target][0]) {
					minroad.push(make_pair(-1 * ncost, make_pair(town, target)));
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		visit[i][1] = true;
		bt(i, 0);
		visit[i][1] = false;
	}
	cout << minans << "\n" << maxans;
}