#include <iostream>
using namespace std;

char prv[100000];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    char u;
    cin >> n;
    u = cin.get();
    int ans = 0;
    for (int i = 0; i < n; i++)
        prv[i] = cin.get();
    u = cin.get();
    for (int i = 0; i < n; i++) {
        u = cin.get();
        if (u < prv[i])
            ans += min(prv[i] - u, u + 26 - prv[i]);
        else
            ans += min(u - prv[i], prv[i] + 26 - u);
    }
    cout << ans;
}