#include <iostream>
using namespace std;

bool bb[2002][2002];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b, c, d;
    int n = 2;
    int ans = 0;
    while (n--) {
        cin >> a >> b >> c >> d;
        for (int i = a + 1000; i < c + 1000; i++) {
            for (int j = b + 1000; j < d + 1000; j++) {
                bb[i][j] = true;
            }
        }
        ans += (c - a) * (d - b);
    }
    cin >> a >> b >> c >> d;
    for (int i = a + 1000; i < c + 1000; i++) {
        for (int j = b + 1000; j < d + 1000; j++) {
            if (bb[i][j]) {
                ans--;
            }
        }
    }
    cout << ans;
}