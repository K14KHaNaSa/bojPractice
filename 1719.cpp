#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n;
int map[200];
int fedge[200];
vector<pair<int, int>> e[200];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int m, a, b, c;
	cin >> n >> m;
	while (m--) {
		cin >> a >> b >> c;
		e[a - 1].push_back(make_pair(b - 1, c));
		e[b - 1].push_back(make_pair(a - 1, c));
	}
	priority_queue<pair<int, int>> move;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			map[j] = 2000000001;
			fedge[j] = j;
		}
		map[i] = 0;
		for (int j = 0; j < e[i].size(); j++) {
			move.push(make_pair(-1 * (e[i].at(j).second), e[i].at(j).first));
			fedge[e[i].at(j).first] = e[i].at(j).first;
			map[e[i].at(j).first] = e[i].at(j).second;
		}
		while (!move.empty()) {
			int d = -1 * move.top().first;
			int v = move.top().second;
			move.pop();
			if (d <= map[v]) {
				for (int j = 0; j < e[v].size(); j++) {
					int tv = e[v].at(j).first;
					int td = e[v].at(j).second;
					if (d + td < map[tv]) {
						fedge[tv] = fedge[v];
						map[tv] = d + td;
						move.push(make_pair(-1 * (d + td), e[v].at(j).first));
					}
				}
			}
		}
		for (int j = 0; j < n; j++) {
			if (i == j) {
				cout << "- ";
			}
			else {
				cout << fedge[j] + 1 << " ";
			}
		}
		cout << "\n";
	}
}