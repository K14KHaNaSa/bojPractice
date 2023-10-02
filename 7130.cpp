#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int m, h, n, c, b;
    cin >> m >> h >> n;
    int ans = 0;
    while (n--) {
        cin >> c >> b;
        ans += max(c * m, b * h);
    }
    cout << ans;
}