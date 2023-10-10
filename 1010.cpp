#include <iostream>
using namespace std;

int mpn[30][30];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n, m, ans, i;
    for (i = 1; i < 30; i++) {
        mpn[i][i] = 1;
        mpn[i][1] = i;
        mpn[i][i - 1] = i;
    }
    for (i = 2; i < 30; i++) {
        for (int j = 2; j <= i; j++) {
            mpn[i][j] = mpn[i - 1][j] + mpn[i - 1][j - 1];
        }
    }
    cin >> t;
    while (t--) {
        cin >> n >> m;
        cout << mpn[m][n] << "\n";
    }
}