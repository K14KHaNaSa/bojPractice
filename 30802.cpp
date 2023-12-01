#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long int n, t, p, ans;
    long long int s[6];
    cin >> n;
    for (int i = 0; i < 6; i++)
        cin >> s[i];
    cin >> t >> p;
    ans = 0;
    for (int i = 0; i < 6; i++) {
        ans += s[i] / t;
        if (s[i] % t > 0)
            ans++;
    }
    cout << ans << "\n" << n / p << " " << n % p;
}