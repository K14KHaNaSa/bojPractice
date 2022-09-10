#include <iostream>
#include <vector>
using namespace std;

bool check[1001];
vector<int> c[1001];

void connected(int n) {
	check[n] = true;
	for (int j = 0; j < c[n].size(); j++) {
		int next = c[n][j];
		if (!check[next]) {
			connected(next);
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m, u, v;
	cin >> n >> m;
	int component = 0;
	for (int i = 0; i < m; i++) {
		cin >> u >> v;
		c[u].push_back(v);
		c[v].push_back(u);
	}
	for (int i = 1; i <= n; i++) {
		if (check[i] == false) {
			connected(i);
			component++;
		}
	}
	cout << component;
}