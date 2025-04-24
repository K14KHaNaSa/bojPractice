#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    double w, c;
    cin >> t;
    double pr, ans, wpc;
    while (t--) {
        cin >> n;
        pr = 1000000000;
        wpc = 0;
        while (n--) {
            cin >> w >> c;
            if (w / c > wpc) {
                ans = c;
                wpc = w / c;
                pr = c;
            }
            else if (w / c == wpc && c < pr) {
                pr = c;
                ans = c;
            }
        }
        cout << ans << '\n';
    }
}