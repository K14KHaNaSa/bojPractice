#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool visit[10000];
vector<pair<int, int>> edg[10000];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int v, e, a, b, c;
	cin >> v >> e;
	for (int i = 0; i < v; i++) {
		visit[i] = false;
	}
	while (e--) {
		cin >> a >> b >> c;
		edg[a - 1].push_back(make_pair(b - 1, c));
		edg[b - 1].push_back(make_pair(a - 1, c));
	}
	int answer = 0;
	visit[0] = true;
	priority_queue<pair<int, int>> lnk; // { length , vertex }
	for (int i = 0; i < edg[0].size(); i++) {
		lnk.push(make_pair(-1 * (edg[0].at(i).second), edg[0].at(i).first));
	}
	while (!lnk.empty()) {
		int leng = -1 * lnk.top().first;
		int nextv = lnk.top().second;
		lnk.pop();
		if (!visit[nextv]) {
			visit[nextv] = true;
			answer += leng;
			for (int i = 0; i < edg[nextv].size(); i++) {
				int dist = edg[nextv].at(i).second;
				int target = edg[nextv].at(i).first;
				if (!visit[target]) {
					lnk.push(make_pair(-1 * dist, target));
				}
			}
		}
	}
	cout << answer;
}