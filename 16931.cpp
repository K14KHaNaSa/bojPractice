#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int paper[100][100];
    int n, m, pre;
    cin >> n >> m;
    int ans = n * m * 2; // top + bottom
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> paper[i][j];
        }
    }
    // up
    for (int j = 0; j < m; j++) {
        ans += paper[0][j];
        pre = paper[0][j];
        for (int i = 1; i < n; i++) {
            if (pre < paper[i][j]) {
                ans += paper[i][j] - pre;
            }
            pre = paper[i][j];
        }
    }
    // down
    for (int j = 0; j < m; j++) {
        ans += paper[n - 1][j];
        pre = paper[n - 1][j];
        for (int i = n - 2; i >= 0; i--) {
            if (pre < paper[i][j]) {
                ans += paper[i][j] - pre;
            }
            pre = paper[i][j];
        }
    }
    // left
    for (int i = 0; i < n; i++) {
        ans += paper[i][0];
        pre = paper[i][0];
        for (int j = 1; j < m; j++) {
            if (pre < paper[i][j]) {
                ans += paper[i][j] - pre;
            }
            pre = paper[i][j];
        }
    }
    // right
    for (int i = 0; i < n; i++) {
        ans += paper[i][m - 1];
        pre = paper[i][m - 1];
        for (int j = m - 2; j >= 0; j--) {
            if (pre < paper[i][j]) {
                ans += paper[i][j] - pre;
            }
            pre = paper[i][j];
        }
    }
    cout << ans;
}