#include <iostream>
using namespace std;

int area[1002][1002];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, a, b, c, d;
    for (int i = 0; i < 1002; i++) {
        for (int j = 0; j < 1002; j++) {
            area[i][j] = 0;
        }
    }
    cin >> n;
    for (int k = 1; k <= n; k++) {
        cin >> a >> b >> c >> d;
        for (int i = a; i < a + c; i++) {
            for (int j = b; j < b + d; j++) {
                area[i][j] = k;
            }
        }
    }
    for (int k = 1; k <= n; k++) {
        int ans = 0;
        for (int i = 0; i < 1002; i++) {
            for (int j = 0; j < 1002; j++) {
                if (area[i][j] == k) {
                    ans++;
                }
            }
        }
        cout << ans << "\n";
    }
}