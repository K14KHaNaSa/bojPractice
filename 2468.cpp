#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	int lowlevel = 101;
	int highlevel = 0;
	vector<vector<int>> map(n, vector<int>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
			lowlevel = min(lowlevel, map[i][j]);
			highlevel = max(highlevel, map[i][j]);
		}
	}
	int answer = 1;
	for (int i = lowlevel; i < highlevel; i++) {
		int levelanswer = 0;
		vector<vector<bool>> floatmap(n, vector<bool>(n));
		queue<pair<int, int>> island;
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				if (map[j][k] > i && floatmap[j][k] == false) {
					island.push(make_pair(j, k));
					floatmap[j][k] = true;
					while (!island.empty()) {
						int u = island.front().first;
						int v = island.front().second;
						island.pop();
						if (u > 0) {
							if (map[u - 1][v] > i && floatmap[u - 1][v] == false) {
								floatmap[u - 1][v] = true;
								island.push(make_pair(u - 1, v));
							}
						}
						if (u < n - 1) {
							if (map[u + 1][v] > i && floatmap[u + 1][v] == false) {
								floatmap[u + 1][v] = true;
								island.push(make_pair(u + 1, v));
							}
						}
						if (v > 0) {
							if (map[u][v - 1] > i && floatmap[u][v - 1] == false) {
								floatmap[u][v - 1] = true;
								island.push(make_pair(u, v - 1));
							}
						}
						if (v < n - 1) {
							if (map[u][v + 1] > i && floatmap[u][v + 1] == false) {
								floatmap[u][v + 1] = true;
								island.push(make_pair(u, v + 1));
							}
						}
					}
					levelanswer++;
				}
			}
		}
		answer = max(answer, levelanswer);
	}
	cout << answer;
}