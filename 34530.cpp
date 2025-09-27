#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int ans, d, now;
    cin >> d;
    ans = 0;
    now = 0;
    while (true) {
        ans++;
        now += d;
        if (now % 360 == 0) {
            cout << ans;
            return 0;
        }
    }
}