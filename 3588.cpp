#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int i, j, k, n, s, f, si, fi, ri, ans;
    cin >> k;
    int r[1001];
    for (i = 1; i <= k; i++) {
        cin >> n >> s >> f;
        for (j = s; j <= f; j++)
            r[j] = 0;
        while (n--) {
            cin >> si >> fi >> ri;
            for (j = si; j <= fi; j++)
                r[j] += ri;
        }
        ans = 0;
        for (j = s; j <= f; j++)
            ans += r[j];
        cout << "Data Set " << i << ":\n" << ans << "\n\n";
    }
}