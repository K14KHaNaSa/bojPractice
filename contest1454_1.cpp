#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, d, k;
    int star[100];
    int s[100];
    int ans = 0;
    bool clean;
    cin >> n >> d >> k;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        star[i] = 0;
    }
    while (d--) {
        clean = false;
        for (int i = 0; i < n; i++) {
            if (s[i] + star[i] > k) {
                clean = true;
                break;
            }
        }
        for (int i = 0; i < n; i++) {
            if (clean)
                star[i] = s[i];
            else
                star[i] += s[i];
        }
        if (clean)
            ans++;
    }
    cout << ans;
}