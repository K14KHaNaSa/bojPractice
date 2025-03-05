#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    double n, k, i, d, s;
    double ans = 0;
    cin >> n >> k;
    cin >> d >> s;
    for (i = 0; i < n; i++)
        ans += d;
    for (i = 0; i < k; i++)
        ans -= s;
    ans /= (n - k);
    (ans > 100 || ans < 0) ? cout << "impossible" : cout << fixed << setprecision(7) << ans;
}