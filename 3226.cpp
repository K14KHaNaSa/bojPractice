#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, t, d;
    int ans = 0;
    string hm;
    cin >> n;
    while (n--) {
        cin >> hm >> d;
        t = stoi(hm.substr(0, 2)) * 60 + stoi(hm.substr(3, 2));
        if (t >= 420 && t <= 1140) {
            if (t + d > 1140)
                ans += (1140 - t) * 10 + (t + d - 1140) * 5;
            else
                ans += d * 10;
        }
        else {
            if (t + d > 420 && t + d < 1140)
                ans += (420 - t) * 5 + (t + d - 420) * 10;
            else
                ans += d * 5;
        }
    }
    cout << ans;
}