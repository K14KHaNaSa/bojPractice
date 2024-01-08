#include <iostream>
using namespace std;

unsigned long long int lnk[100000];
unsigned long long int n, m, u, v, ans, i, j, rtn;
unsigned long long int ys(int nod) {
    rtn = 1;
    bool div_six = false;
    for (j = lnk[nod]; j > lnk[nod] - 3; j--) {
        rtn *= j;
        if (!div_six) {
            if (rtn % 6 == 0) {
                rtn /= 6;
                div_six = true;
            }
        }
        if (rtn > 1000000007)
            rtn = rtn % 1000000007;
    }
    return rtn;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ans = 0;
    cin >> n >> m;
    for (i = 0; i < n; i++)
        lnk[i] = 0;
    while (m--) {
        cin >> u >> v;
        lnk[u - 1]++;
        lnk[v - 1]++;
    }
    for (i = 0; i < n; i++) {
        if (lnk[i] > 2)
            ans = (ys(i) + ans) % 1000000007;
    }
    cout << ans;
}