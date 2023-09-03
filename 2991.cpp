#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b, c, d;
    int atk[3];
    cin >> a >> b >> c >> d >> atk[0] >> atk[1] >> atk[2];
    for (int i = 0; i < 3; i++) {
        int ans = 0;
        if (atk[i] % (a + b) <= a && atk[i] % (a + b) > 0) {
            ans++;
        }
        if (atk[i] % (c + d) <= c && atk[i] % (c + d) > 0) {
            ans++;
        }
        cout << ans << "\n";
    }
}