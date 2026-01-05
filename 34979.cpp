#include <iostream>
using namespace std;

int noiz[6][1002];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, q, qn, a, b, ans, ans_a, ans_b, i, j;
    cin >> n >> q;
    for (i = 0; i <= 5; i++) {
        for (j = 0; j <= n + 1; j++)
            noiz[i][j] = 0;
    }
    while (q--) {
        cin >> qn;
        if (qn == 1) {
            cin >> a >> b;
            noiz[a][b]++;
            noiz[a - 1][b]++;
            noiz[a + 1][b]++;
            noiz[a][b - 1]++;
            noiz[a][b + 1]++;
        }
        if (qn == 2) {
            ans = 0;
            ans_b = 1;
            cin >> a;
            for (j = 1; j <= n; j++) {
                if (noiz[a][j] > ans) {
                    ans = noiz[a][j];
                    ans_b = j;
                }
            }
            cout << ans_b << '\n';
        }
    }
    ans = 0;
    ans_a = 1;
    ans_b = 1;
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= n; j++) {
            if (noiz[i][j] > ans) {
                ans = noiz[i][j];
                ans_a = i;
                ans_b = j;
            }
        }
    }
    cout << ans_a << ' ' << ans_b;
}