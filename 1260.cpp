#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

bool dfsvisit[1001];
bool bfsvisit[1001];
vector<int> nodes[1001];

void dfs(int v) {
	dfsvisit[v] = true;
	cout << v << " ";
	for (int j = 0; j < nodes[v].size(); j++) {
		int next = nodes[v][j];
		if (!dfsvisit[next]) {
			dfs(next);
		}
	}
}

void bfs(int v) {
	queue<int> bfsq;
	bfsq.push(v);
	bfsvisit[v] = true;
	while (!bfsq.empty()) {
		int now = bfsq.front();
		bfsq.pop();
		cout << now << " ";
		for (int j = 0; j < nodes[now].size(); j++) {
			int next = nodes[now][j];
			if (!bfsvisit[next]) {
				bfsq.push(next);
				bfsvisit[next] = true;
			}
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m, v, fr, to;
	cin >> n >> m >> v;
	for (int i = 0; i < m; i++) {
		cin >> fr >> to;
		nodes[fr].push_back(to);
		nodes[to].push_back(fr);
	}
	for (int i = 1; i <= n; i++) {
		sort(nodes[i].begin(), nodes[i].end());
	}
	dfs(v);
	cout << "\n";
	bfs(v);
}