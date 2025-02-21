#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, p, ans;
    ans = 0;
    cin >> n;
    while (n--) {
        cin >> p;
        ans += p / 2;
        if (p % 2 == 1)
            ans++;
    }
    cout << ans;
}