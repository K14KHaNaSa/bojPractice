#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int abc[7];
    cin >> abc[0] >> abc[1] >> abc[2];
    abc[3] = abc[0] * abc[1];
    abc[4] = abc[0] * abc[2];
    abc[5] = abc[1] * abc[2];
    abc[6] = abc[0] * abc[1] * abc[2];
    int ans = abc[0];
    for (int i = 1; i < 7; i++) {
        if (ans % 2 == 0 && abc[i] % 2 == 1)
            ans = abc[i];
        else if (ans % 2 == abc[i] % 2)
            ans = max(ans, abc[i]);
    }
    cout << ans;
}