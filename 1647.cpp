#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<pair<int, int>> road[100000];
bool connected[100000];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, a, b, c;
	cin >> n >> m;
	while (m--) {
		cin >> a >> b >> c;
		road[a - 1].push_back(make_pair(b - 1, c));
		road[b - 1].push_back(make_pair(a - 1, c));
	}
	for (int i = 1; i < n; i++) {
		connected[i] = false;
	}
	connected[0] = true;
	priority_queue<pair<int, int>> remain;
	int answer = 0;
	int cutroad = 0;
	for (int i = 0; i < road[0].size(); i++) {
		remain.push(make_pair(-1 * road[0].at(i).second, road[0].at(i).first));
	}
	while (!remain.empty()) {
		int rlen = -1 * remain.top().first;
		int town = remain.top().second;
		remain.pop();
		if (!connected[town]) {
			answer += rlen;
			cutroad = max(cutroad, rlen);
			connected[town] = true;
			for (int i = 0; i < road[town].size(); i++) {
				int dest = road[town].at(i).first;
				int dlen = road[town].at(i).second;
				if (!connected[dest]) {
					remain.push(make_pair(-1 * dlen, dest));
				}
			}
		}
	}
	cout << answer - cutroad;
}