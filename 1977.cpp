#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    bool p[10001];
    int n, m, i, ans, mn;
    for (i = 1; i < 10001; i++)
        p[i] = false;
    for (i = 1; i < 101; i++)
        p[i * i] = true;
    cin >> m >> n;
    ans = 0;
    mn = 10001;
    for (i = n; i >= m; i--) {
        if (p[i]) {
            ans += i;
            mn = i;
        }
    }
    (ans > 0) ? cout << ans << '\n' << mn : cout << -1;
}