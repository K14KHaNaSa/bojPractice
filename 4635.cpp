#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, s, t, ans, e;
    cin >> n;
    while (n != -1) {
        ans = 0;
        e = 0;
        while (n--) {
            cin >> s >> t;
            ans += (t - e) * s;
            e = t;
        }
        cout << ans << " miles\n";
        cin >> n;
    }
}