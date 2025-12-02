#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long int n, a, ans;
    bool start_is_one = false;
    cin >> n >> ans;
    if (ans == 1)
        start_is_one = true;
    while (n--) {
        cin >> a;
        if (start_is_one) {
            ans += a;
            start_is_one = false;
        }
        else if (a == 1)
            ans++;
        else
            ans *= a;
        ans %= 1000000007;
    }
    cout << ans;
}