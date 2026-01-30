#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int n;
vector<int> ans(200001);
vector<int> from[200001];
queue<pair<int, int>> path; // back , step

void goback() {
    while (!path.empty()) {
        int backnumber = path.front().first;
        int step = path.front().second;
        path.pop();
        for (int i = 0; i < from[backnumber].size(); i++) {
            if (ans[from[backnumber][i]] > 200001) {
                ans[from[backnumber][i]] = step + 1;
                path.push(make_pair(from[backnumber][i], step + 1));
            }
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, i;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a;
        from[a].push_back(i);
        if (a == n) {
            ans[i] = 1;
            path.push(make_pair(i, 1));
        }
        else
            ans[i] = 200002; // reset as -1
    }
    ans[n] = 0;
    goback();
    for (i = 1; i <= n; i++) {
        (ans[i] > 200001) ? cout << "-1\n" : cout << ans[i] << '\n';
    }
}