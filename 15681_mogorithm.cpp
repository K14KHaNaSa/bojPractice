#include <iostream>
#include <vector>
using namespace std;

vector<int> tree[100001];
int ans[100001];
bool visit[100001];
int n, r, q, u, v, i;

int fill_ans(int u) {
    int sub_trees = 1;
    for (int j = 0; j < tree[u].size(); j++) {
        int root_num = tree[u][j];
        if (!visit[root_num]) {
            visit[root_num] = true;
            sub_trees += fill_ans(root_num);
        }
    }
    ans[u] = sub_trees;
    return sub_trees;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> r >> q; // input
    for (i = 0; i < n - 1; i++) {
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);

        visit[i] = false; // reset no visit
    }
    visit[n - 1] = false;

    visit[r] = true; // define 'root r' visit before dfs
    fill_ans(r); // start find answers

    while (q--) {
        cin >> u;
        cout << ans[u] << '\n';
    }
    //for (i = 1; i <= n; i++) // dummy code for check all ans[nodes]
    //    cout << ans[i] << " ";
}