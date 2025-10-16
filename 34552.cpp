#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int m[11];
    int i, n, b, s, ans;
    double l;
    ans = 0;
    for (i = 0; i < 11; i++)
        cin >> m[i];
    cin >> n;
    while (n--) {
        cin >> b >> l >> s;
        if (l >= 2 && s >= 17)
            ans += m[b];
    }
    cout << ans;
}