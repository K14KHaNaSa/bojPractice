#include <iostream>
#include <vector>
using namespace std;

int n, r;
vector<int> vtx[100001];
int ans[100001];

int tree(int up, int node) {
	ans[node] = 1;
	for (int i = 0; i < vtx[node].size(); i++) {
		if (vtx[node][i] != up) {
			ans[node] += tree(node, vtx[node][i]);
		}
	}
	return ans[node];
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int q, u, v;
	cin >> n >> r >> q;
	for (int i = 1; i < n; i++) {
		cin >> u >> v;
		vtx[u].push_back(v);
		vtx[v].push_back(u);
	}
	ans[r] = 1;
	for (int i = 0; i < vtx[r].size(); i++) {
		ans[r] += tree(r, vtx[r][i]);
	}
	while (q--) {
		cin >> u;
		cout << ans[u] << "\n";
	}
}