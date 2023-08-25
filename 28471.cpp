#include <iostream>
#include <queue>
using namespace std;

bool map[2000][2000]; // true = . / false = wall + F + checked
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    queue<pair<int, int>> move; // first push = 'F'
    char a;
    for (int i = 0; i < n; i++) {
        a = cin.get(); // dummy input \n
        for (int j = 0; j < n; j++) {
            a = cin.get();
            if (a == '.') {
                map[i][j] = true;
            }
            else {
                map[i][j] = false;
                if (a == 'F') {
                    move.push(make_pair(i, j));
                }
            }
        }
    }
    int ans = 0;
    while (!move.empty()) {
        int u = move.front().first;
        int v = move.front().second;
        move.pop();
        // DO NOT PUSH [u+1][v] ( -- W -- > [u][v])
        if (u > 0) {
            if (map[u - 1][v]) {
                // X
                map[u - 1][v] = false;
                ans++;
                move.push(make_pair(u - 1, v));
            }
        }
        if (v > 0) {
            if (u > 0) {
                if (map[u - 1][v - 1]) {
                    // C
                    map[u - 1][v - 1] = false;
                    ans++;
                    move.push(make_pair(u - 1, v - 1));
                }
            }
            if (map[u][v - 1]) {
                // D
                map[u][v - 1] = false;
                ans++;
                move.push(make_pair(u, v - 1));
            }
            if (u < n - 1) {
                if (map[u + 1][v - 1]) {
                    // E
                    map[u + 1][v - 1] = false;
                    ans++;
                    move.push(make_pair(u + 1, v - 1));
                }
            }
        }
        if (v < n - 1) {
            if (u > 0) {
                if (map[u - 1][v + 1]) {
                    // Z
                    map[u - 1][v + 1] = false;
                    ans++;
                    move.push(make_pair(u - 1, v + 1));
                }
            }
            if (map[u][v + 1]) {
                // A
                map[u][v + 1] = false;
                ans++;
                move.push(make_pair(u, v + 1));
            }
            if (u < n - 1) {
                if (map[u + 1][v + 1]) {
                    // Q
                    map[u + 1][v + 1] = false;
                    ans++;
                    move.push(make_pair(u + 1, v + 1));
                }
            }
        }
    }
    cout << ans;
}