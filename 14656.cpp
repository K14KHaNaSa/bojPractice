#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, i, s, ans;
    cin >> n;
    ans = 0;
    for (i = 1; i <= n; i++) {
        cin >> s;
        if (s != i)
            ans++;
    }
    cout << ans;
}