#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, s, f;
    int ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s >> f;
        if (s * 5 - f * 3 > 40)
            ans++;
    }
    cout << ans;
    if (n == ans)
        cout << '+';
}