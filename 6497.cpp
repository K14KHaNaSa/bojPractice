#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<pair<int, int>> road[200000];
bool linked[200000];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int m, n, x, y, z;
	cin >> m >> n;
	while (!(m == 0 && n == 0)) {
		int allcost = 0;
		while (n--) {
			cin >> x >> y >> z;
			road[x].push_back(make_pair(y, z));
			road[y].push_back(make_pair(x, z));
			allcost += z;
		}
		linked[0] = true;
		priority_queue<pair<int, int>> lnk;
		for (int i = 0; i < road[0].size(); i++) {
			lnk.push(make_pair(-1 * road[0].at(i).second, road[0].at(i).first));
		}
		int mstcost = 0;
		while (!lnk.empty()) {
			int cl = -1 * lnk.top().first;
			int h = lnk.top().second;
			lnk.pop();
			if (!linked[h]) {
				linked[h] = true;
				mstcost += cl;
				for (int i = 0; i < road[h].size(); i++) {
					int nh = road[h].at(i).first;
					int nl = road[h].at(i).second;
					if (!linked[nh]) {
						lnk.push(make_pair(-1 * nl, nh));
					}
				}
			}
		}
		cout << allcost - mstcost << "\n";
		for (int i = 0; i < m; i++) {
			road[i].clear();
			linked[i] = false;
		}
		cin >> m >> n;
	}
}