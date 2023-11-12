#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, prel, prer, l, r;
    int ans = 0;
    cin >> t;
    t--;
    cin >> prel >> prer;
    if (prel != 0 && prer != 0 && prel == prer)
        ans++;
    while (t--) {
        cin >> l >> r;
        if (l != 0 && r != 0 && l == r)
            ans++;
        if (l == prel && l != 0)
            ans++;
        if (r == prer && r != 0)
            ans++;
        prel = l;
        prer = r;
    }
    cout << ans;
}