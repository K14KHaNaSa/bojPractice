#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, p;
    int ans = 0;
    int this_strk = 0;
    bool strk_frz = true;
    int next_frz = 0;
    cin >> n;
    while (n--) {
        cin >> p;
        if (next_frz == 0)
            strk_frz = true;
        if (p > 0)
            this_strk++;
        else if (this_strk > 0 && p == 0) {
            if (strk_frz) {
                strk_frz = false;
                next_frz = 2;
            }
            else {
                ans = max(ans, this_strk);
                this_strk = 0;
            }
        }
        if (next_frz > 0)
            next_frz--;
    }
    cout << max(ans, this_strk);
}