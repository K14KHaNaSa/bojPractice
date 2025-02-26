#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, a, gap, ans, i, j;
    cin >> n;
    while (n > 0) {
        gap = 1000000000;
        for (i = 1; i <= n; i++) {
            cin >> a;
            j = max(a - 2023, 2023 - a);
            if (j < gap) {
                gap = j;
                ans = i;
            }
        }
        cout << ans << '\n';
        cin >> n;
    }
}