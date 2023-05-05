#include <iostream>
#include <queue>
using namespace std;

int bamboo[500][500];
int backstep[500][500];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	priority_queue<pair<int, pair<int, int>>> step; // bamboo , (u, v)
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> bamboo[i][j];
			step.push(make_pair(bamboo[i][j], make_pair(i, j)));
			backstep[i][j] = 1;
		}
	}
	int answer = 0;
	while (!step.empty()) {
		int bb = step.top().first; // bamboo in the area
		int u = step.top().second.first;
		int v = step.top().second.second;
		step.pop();
		answer = max(answer, backstep[u][v]);
		if (u > 0) {
			if (bamboo[u - 1][v] < bb) {
				backstep[u - 1][v] = max(backstep[u - 1][v], backstep[u][v] + 1);
			}
		}
		if (u < n - 1) {
			if (bamboo[u + 1][v] < bb) {
				backstep[u + 1][v] = max(backstep[u + 1][v], backstep[u][v] + 1);
			}
		}
		if (v > 0) {
			if (bamboo[u][v - 1] < bb) {
				backstep[u][v - 1] = max(backstep[u][v - 1], backstep[u][v] + 1);
			}
		}
		if (v < n - 1) {
			if (bamboo[u][v + 1] < bb) {
				backstep[u][v + 1] = max(backstep[u][v + 1], backstep[u][v] + 1);
			}
		}
	}
	cout << answer;
}