#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, a, b, c;
    int ans = 10000;
    cin >> n;
    while (n--) {
        cin >> a >> b >> c;
        if (a + b + c >= 512)
            ans = min(ans, a + b + c);
    }
    ans > 9999 ? cout << -1 : cout << ans;
}