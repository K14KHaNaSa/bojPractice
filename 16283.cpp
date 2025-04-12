#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b, n, w, i;
    int ans_a = 0;
    int ans_b = 0;
    cin >> a >> b >> n >> w;
    for (i = 1; i < n; i++) {
        if (a * i + b * (n - i) == w) {
            if (ans_a > 0 && ans_b > 0) {
                cout << -1;
                return 0;
            }
            else {
                ans_a = i;
                ans_b = n - i;
            }
        }
    }
    if (ans_a > 0 && ans_b > 0)
        cout << ans_a << ' ' << ans_b;
    else
        cout << -1;
}