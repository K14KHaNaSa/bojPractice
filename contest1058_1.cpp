#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b, k, x;
    cin >> a >> b >> k >> x;
    int ans = min(b, k + x) - max(a, k - x);
    if (k + x < a || k - x > b)
        cout << "IMPOSSIBLE";
    else
        cout << ans + 1;
}