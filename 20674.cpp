#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, p, pm;
    int ans = 0;
    cin >> n;
    pm = 100001;
    while (n--) {
        cin >> p;
        if (p < pm)
            pm = p;
        else
            ans += (p - pm);
    }
    cout << ans;
}