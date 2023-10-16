#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, v;
    cin >> n;
    while (n > 0) {
        int pre = -1;
        int ans = 0;
        bool asc = true;
        while (n--) {
            cin >> v;
            if (pre > v && asc) {
                ans++;
                asc = false;
            }
            else if (pre < v)
                asc = true;
            pre = v;
        }
        cout << ans << "\n";
        cin >> n;
    }
}