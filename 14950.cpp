#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool conq[10000];
vector<pair<int, int>> road[10000]; // { to, dist }

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, t, a, b, c;
	cin >> n >> m >> t;
	for (int i = 1; i < n; i++) {
		conq[i] = false;
	}
	while (m--) {
		cin >> a >> b >> c;
		road[a - 1].push_back(make_pair(b - 1, c));
		road[b - 1].push_back(make_pair(a - 1, c));
	}
	conq[0] = true;
	priority_queue<pair<int, int>> lfgo;
	for (int i = 0; i < road[0].size(); i++) {
		lfgo.push(make_pair(-1 * road[0].at(i).second, road[0].at(i).first));
	}
	int answer = 0;
	int divcity = 0;
	while (!lfgo.empty()) {
		int cost = -1 * lfgo.top().first;
		int city = lfgo.top().second;
		lfgo.pop();
		if (!conq[city]) {
			answer += cost + divcity * t;
			divcity++;
			conq[city] = true;
			for (int i = 0; i < road[city].size(); i++) {
				int target = road[city].at(i).first;
				int ncost = road[city].at(i).second;
				if (!conq[target]) {
					lfgo.push(make_pair(-1 * ncost, target));
				}
			}
		}
	}
	cout << answer;
}