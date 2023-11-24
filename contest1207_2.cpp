#include <iostream>
#include <queue>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    queue<pair<int, int>> area;
    int n, m, k;
    cin >> n >> m >> k;
    int room[500][500];
    bool cleaned[500][500];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> room[i][j];
            cleaned[i][j] = false;
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!cleaned[i][j]) {
                area.push(make_pair(i, j));
                while (!area.empty()) {
                    int u = area.front().first;
                    int v = area.front().second;
                    area.pop();
                    if (u > 0) {
                        if (!cleaned[u - 1][v] && abs(room[u][v] - room[u - 1][v]) <= k) {
                            cleaned[u - 1][v] = true;
                            area.push(make_pair(u - 1, v));
                        }
                    }
                    if (u < n - 1) {
                        if (!cleaned[u + 1][v] && abs(room[u][v] - room[u + 1][v]) <= k) {
                            cleaned[u + 1][v] = true;
                            area.push(make_pair(u + 1, v));
                        }
                    }
                    if (v > 0) {
                        if (!cleaned[u][v - 1] && abs(room[u][v] - room[u][v - 1]) <= k) {
                            cleaned[u][v - 1] = true;
                            area.push(make_pair(u, v - 1));
                        }
                    }
                    if (v < m - 1) {
                        if (!cleaned[u][v + 1] && abs(room[u][v] - room[u][v + 1]) <= k) {
                            cleaned[u][v + 1] = true;
                            area.push(make_pair(u, v + 1));
                        }
                    }
                }
                ans++;
            }
        }
    }
    cout << ans;
}