#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n, l, r, gap;
int map[50][50];
bool openmap[50][50] = { false, };

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> l >> r;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> map[i][j];
        }
    }
    int answer = 0;
    bool peoplemove = true;
    while (peoplemove) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) { // 개방할 나라 탐색
                if (i > 0) {
                    gap = max(map[i][j] - map[i - 1][j], map[i - 1][j] - map[i][j]);
                    if (gap >= l && gap <= r) {
                        openmap[i][j] = true;
                        openmap[i - 1][j] = true;
                    }
                }
                if (i < n - 1) {
                    gap = max(map[i][j] - map[i + 1][j], map[i + 1][j] - map[i][j]);
                    if (gap >= l && gap <= r) {
                        openmap[i][j] = true;
                        openmap[i + 1][j] = true;
                    }
                }
                if (j > 0) {
                    gap = max(map[i][j] - map[i][j - 1], map[i][j - 1] - map[i][j]);
                    if (gap >= l && gap <= r) {
                        openmap[i][j] = true;
                        openmap[i][j - 1] = true;
                    }
                }
                if (j < n - 1) {
                    gap = max(map[i][j] - map[i][j + 1], map[i][j + 1] - map[i][j]);
                    if (gap >= l && gap <= r) {
                        openmap[i][j] = true;
                        openmap[i][j + 1] = true;
                    }
                }
            }
        }
        queue<pair<int, int>> nationsearch;
        queue<pair<int, int>> movenation;
        bool moveleastonce = false;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (openmap[i][j]) {
                    moveleastonce = true;
                    int unionsum = 0;
                    nationsearch.push(make_pair(i, j));
                    openmap[i][j] = false;
                    while (!nationsearch.empty()) { // 국경선 개방된 묶음 단위 탐색
                        int u = nationsearch.front().first;
                        int v = nationsearch.front().second;
                        nationsearch.pop();
                        unionsum += map[u][v];
                        movenation.push(make_pair(u, v));
                        if (u > 0) {
                            gap = max(map[u - 1][v] - map[u][v], map[u][v] - map[u - 1][v]);
                            if (openmap[u - 1][v] && gap >= l && gap <= r) {
                                openmap[u - 1][v] = false;
                                nationsearch.push(make_pair(u - 1, v));
                            }
                        }
                        if (u < n - 1) {
                            gap = max(map[u + 1][v] - map[u][v], map[u][v] - map[u + 1][v]);
                            if (openmap[u + 1][v] && gap >= l && gap <= r) {
                                openmap[u + 1][v] = false;
                                nationsearch.push(make_pair(u + 1, v));
                            }
                        }
                        if (v > 0) {
                            gap = max(map[u][v - 1] - map[u][v], map[u][v] - map[u][v - 1]);
                            if (openmap[u][v - 1] && gap >= l && gap <= r) {
                                openmap[u][v - 1] = false;
                                nationsearch.push(make_pair(u, v - 1));
                            }
                        }
                        if (v < n - 1) {
                            gap = max(map[u][v + 1] - map[u][v], map[u][v] - map[u][v + 1]);
                            if (openmap[u][v + 1] && gap >= l && gap <= r) {
                                openmap[u][v + 1] = false;
                                nationsearch.push(make_pair(u, v + 1));
                            }
                        }
                    }
                    int nations = movenation.size();
                    while (!movenation.empty()) { // 인구수 조정
                        int u = movenation.front().first;
                        int v = movenation.front().second;
                        map[u][v] = unionsum / nations;
                        movenation.pop();
                    }
                }
            }
        }
        if (!moveleastonce) {
            peoplemove = false;
        }
        else {
            answer++;
        }
    }
    cout << answer;
}
