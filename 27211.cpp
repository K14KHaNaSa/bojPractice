#include <iostream>
#include <queue>
using namespace std;

bool map[1000][1000] = { false, };

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, maptype;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> maptype;
            if (maptype == 1) {
                map[i][j] = true;
            }
        }
    }
    queue<pair<int, int>> move;
    int answer = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!map[i][j]) {
                answer++;
                map[i][j] = true;
                move.push(make_pair(i, j));
                while (!move.empty()) {
                    int u = move.front().first;
                    int v = move.front().second;
                    move.pop();
                    if (u > 0) {
                        if (!map[u - 1][v]) {
                            map[u - 1][v] = true;
                            move.push(make_pair(u - 1, v));
                        }
                    }
                    else if (!map[n - 1][v]) {
                        map[n - 1][v] = true;
                        move.push(make_pair(n - 1, v));
                    }
                    if (u < n - 1) {
                        if (!map[u + 1][v]) {
                            map[u + 1][v] = true;
                            move.push(make_pair(u + 1, v));
                        }
                    }
                    else if (!map[0][v]) {
                        map[0][v] = true;
                        move.push(make_pair(0, v));
                    }
                    if (v > 0) {
                        if (!map[u][v - 1]) {
                            map[u][v - 1] = true;
                            move.push(make_pair(u, v - 1));
                        }
                    }
                    else if (!map[u][m - 1]) {
                        map[u][m - 1] = true;
                        move.push(make_pair(u, m - 1));
                    }
                    if (v < m - 1) {
                        if (!map[u][v+1]) {
                            map[u][v+1] = true;
                            move.push(make_pair(u, v+1));
                        }
                    }
                    else if (!map[u][0]) {
                        map[u][0] = true;
                        move.push(make_pair(u, 0));
                    }
                }
            }
        }
    }
    cout << answer;
}