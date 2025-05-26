#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int team[501][501]; // team[i][j] = i 번째 팀은 j 번째 팀을 앞선다.
int start[501]; // 이전 대회 등수
int back[501]; // back[i] = i 번째 팀의 앞에 있는 팀 수
vector<int> result;
bool changed[501];
int new_head;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n, m, ti, a, b;
    cin >> t;
    while (t--) {
        cin >> n;
        queue<int> q;
        result.clear();
        for (int i = 1; i <= n; i++) {
            cin >> ti;
            start[i] = ti;
            back[i] = 0;
            changed[i] = false;
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++)
                team[i][j] = 0;
        }
        for (int i = 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {
                team[start[i]][start[j]] = 1;
                back[start[j]]++;
            }
        }
        bool possible = true;
        cin >> m;
        while (m--) {
            cin >> a >> b;
            if (team[a][b] == 1) { // 이미 앞선다고?
                team[a][b] = 0;
                team[b][a] = 1;
                back[a]++;
                back[b]--;
                changed[a] = true;
                changed[b] = true;
            }
            else if (team[b][a] == 1) {
                team[a][b] = 1;
                team[b][a] = 0;
                back[a]--;
                back[b]++;
                changed[a] = true;
                changed[b] = true;
            }
            else {
                possible = false;
            }
        }
        if (!possible)
            cout << "IMPOSSIBLE\n";
        else {
            for (int i = 1; i <= n; i++) {
                if (back[i] == 0)
                    q.push(i);
            }
            if (q.size() > 1 || q.size() == 0) {
                possible = false;
            }
            while (!q.empty()) {
                int now = q.front();
                q.pop();
                result.push_back(now);
                for (int i = 1; i <= n; i++) {
                    new_head = 0;
                    if (team[now][i] == 1) {
                        team[now][i] = 0;
                        back[i]--;
                        if (back[i] == 0) {
                            q.push(i);
                            new_head++;
                        }
                    }
                    if (new_head > 1) {
                        possible = false;
                        break;
                    }
                }
                if (!possible)
                    break;
            }
            if (possible && result.size() == n) {
                for (int i = 0; i < n - 1; i++)
                    cout << result[i] << " ";
                cout << result[n - 1];
                cout << '\n';
            }
            else
                cout << "IMPOSSIBLE\n";
        }
    }
}