#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long int n, ans, i;
    ans = 0;
    cin >> n;
    for (i = 1; i <= 6; i++) {
        if (n >= i) {
            ans++;
            n -= i;
        }
        else
            break;
    }
    ans += n / 7;
    n %= 7;
    if (n > 0)
        ans++;
    cout << ans;
}