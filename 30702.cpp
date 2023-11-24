#include <iostream>
#include <queue>
using namespace std;

int n, m;
char a[50][50];
char b[50][50];
bool painted[50][50];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char color;
    cin >> n >> m;
    for (int i = 0; i < n; i++) { // paint flag A
        color = cin.get(); // dummy \n
        for (int j = 0; j < m; j++) {
            color = cin.get();
            a[i][j] = color;
            painted[i][j] = false;
        }
    }
    for (int i = 0; i < n; i++) { // paint flag B
        color = cin.get(); // dummy \n
        for (int j = 0; j < m; j++) {
            color = cin.get();
            b[i][j] = color;
        }
    }
    queue<pair<int, int>> same_area;
    for (int i = 0; i < n; i++) { // swap A to B
        for (int j = 0; j < m; j++) {
            if (!painted[i][j]) {
                same_area.push(make_pair(i, j));
                painted[i][j] = true;
                char before = a[i][j];
                char after = b[i][j];
                a[i][j] = after;
                while (!same_area.empty()) {
                    int u = same_area.front().first;
                    int v = same_area.front().second;
                    same_area.pop();
                    if (u > 0) {
                        if (a[u - 1][v] == before && !painted[u - 1][v]) {
                            same_area.push(make_pair(u - 1, v));
                            painted[u - 1][v] = true;
                            a[u - 1][v] = after;
                        }
                    }
                    if (u < n - 1) {
                        if (a[u + 1][v] == before && !painted[u + 1][v]) {
                            same_area.push(make_pair(u + 1, v));
                            painted[u + 1][v] = true;
                            a[u + 1][v] = after;
                        }
                    }
                    if (v > 0) {
                        if (a[u][v - 1] == before && !painted[u][v - 1]) {
                            same_area.push(make_pair(u, v - 1));
                            painted[u][v - 1] = true;
                            a[u][v - 1] = after;
                        }
                    }
                    if (v < m - 1) {
                        if (a[u][v + 1] == before && !painted[u][v + 1]) {
                            same_area.push(make_pair(u, v + 1));
                            painted[u][v + 1] = true;
                            a[u][v + 1] = after;
                        }
                    }
                }
            }
        }
    }
    bool ok = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] != b[i][j])
                ok = false;
        }
    }
    if (ok)
        cout << "YES";
    else
        cout << "NO";
}