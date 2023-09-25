#include <iostream>
using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, h, v;
    cin >> n;
    int ans = 0;
    while (n--) {
        cin >> h >> v;
        if (h == 136)
            ans += 1000;
        if (h == 142)
            ans += 5000;
        if (h == 148)
            ans += 10000;
        if (h == 154)
            ans += 50000;
    }
    cout << ans;
}