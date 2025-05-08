#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> nxt[32001];
int fronts[32001];
queue<int> q;
int n, m;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b, now;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        fronts[i] = 0;
    while (m--) {
        cin >> a >> b;
        nxt[a].push_back(b);
        fronts[b]++;
    }
    for (int i = 1; i <= n; i++) {
        if (fronts[i] < 1)
            q.push(i);
    }
    while (!q.empty()) {
        now = q.front();
        q.pop();
        cout << now << ' ';
        for (int i = 0; i < nxt[now].size(); i++) {
            fronts[nxt[now][i]]--;
            if (fronts[nxt[now][i]] < 1)
                q.push(nxt[now][i]);
        }
    }
}