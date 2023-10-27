#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int s, v1, v2;
    cin >> s >> v1 >> v2;
    int ans1 = 1000000;
    int ans2 = 1000000;
    for (int i = 0; i * v1 <= s; i++) {
        if ((s - (v1 * i)) % v2 == 0) {
            if (ans1 + ans2 > i + ((s - (v1 * i)) / v2)) {
                ans1 = i;
                ans2 = (s - (v1 * i)) / v2;
            }
        }
    }
    if (ans1 + ans2 == 2000000)
        cout << "Impossible";
    else
        cout << ans1 << " " << ans2;
}