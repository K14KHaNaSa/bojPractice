#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, a, i;
vector<int> pre_build[501];
queue<int> now_build;
int pre_count[501];
int build_time[501];
int pre_build_time[501];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (i = 1; i <= n; i++) {
        pre_count[i] = 0;
        pre_build_time[i] = 0;
    }
    for (i = 1; i <= n; i++) {
        cin >> build_time[i];
        cin >> a;
        while (a > -1) {
            pre_build[a].push_back(i);
            pre_count[i]++;
            cin >> a;
        }
    }
    for (i = 1; i <= n; i++) {
        if (pre_count[i] < 1)
            now_build.push(i);
    }
    while (!now_build.empty()) {
        int now = now_build.front();
        now_build.pop();
        for (i = 0; i < pre_build[now].size(); i++) { 
            int nxt = pre_build[now][i];
            pre_build_time[nxt] = max(pre_build_time[nxt], build_time[now]);
            pre_count[nxt]--;
            if (pre_count[nxt] < 1) {
               build_time[nxt] += pre_build_time[nxt];
                now_build.push(nxt);
            }
        }
    }
    for (i = 1; i <= n; i++)
        cout << build_time[i] << '\n';
}