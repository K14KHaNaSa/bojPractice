#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k, x;
    cin >> n >> k;
    int pre = -1;
    int ans = 0;
    while (n--) {
        cin >> x;
        if (pre < 0) {
            pre = x;
        }
        else if (pre + k < x) {
            pre = x;
            ans++;
        }
    }
    cout << ans + 1;
}