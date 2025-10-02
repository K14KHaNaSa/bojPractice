#include <iostream>
using namespace std;

long long int n, mn, ans, a;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ans = 0;
    mn = 1000000001;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        mn = min(mn, a);
        ans += a;
    }
    cout << ans - mn * n;
}