#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int k, w, m;
    cin >> k >> w >> m;
    if (k >= w)
        cout << 0;
    else {
        int ans = (w - k) / m;
        if ((w - k) % m != 0)
            ans++;
        cout << ans;
    }
}