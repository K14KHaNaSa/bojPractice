#include <iostream>
#include <vector>
#include <queue>
#define INF 1e18
using namespace std;

long long int n, k;
long long int farthestdist[100000];
long long int interv[100000];
vector<pair<long long int, long long int>> road[100000];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long int m, u, v, c, ntv;
	cin >> n >> m >> k;
	while (m--) {
		cin >> u >> v >> c;
		road[v - 1].push_back(make_pair(u - 1, c));
	}
	for (long long int i = 0; i < n; i++) {
		farthestdist[i] = INF;
	}
	for (long long int i = 0; i < k; i++) {
		cin >> ntv;
		interv[i] = ntv - 1;
		farthestdist[ntv - 1] = 0;
	}
	priority_queue<pair<long long int, long long int>> move;
	for (long long int i = 0; i < k; i++) {
		move.push(make_pair(0, interv[i]));
		while (!move.empty()) {
			long long int d = -1 * move.top().first;
			long long int v = move.top().second;
			move.pop();
			if (d <= farthestdist[v]) {
				for (long long int j = 0; j < road[v].size(); j++) {
					long long int tv = road[v].at(j).first;
					long long int td = road[v].at(j).second;
					if (d + td < farthestdist[tv]) {
						farthestdist[tv] = d + td;
						move.push(make_pair(-1 * (d + td), tv));
					}
				}
			}
		}
	}
	long long int anscity = 100001;
	long long int ansdist = 0;
	for (int i = 0; i < n; i++) {
		if (farthestdist[i] > ansdist) {
			ansdist = farthestdist[i];
			anscity = i + 1;
		}
		else if (farthestdist[i] == ansdist) {
			ansdist = farthestdist[i];
			if (i + 1 < anscity) {
				anscity = i + 1;
			}
		}
	}
	cout << anscity << "\n" << ansdist;
}