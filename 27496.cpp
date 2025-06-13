#include <iostream>
using namespace std;

int n, l, a, i;
int alc[10000];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> l;
    int ans = 0;
    int now = 0;
    for (i = 0; i < l; i++)
        alc[i] = 0;
    for (i = 0; i < n; i++) {
        cin >> a;
        now += a - alc[i % l];
        if (now >= 129 && now <= 138)
            ans++;
        alc[i % l] = a;
    }
    cout << ans;
}