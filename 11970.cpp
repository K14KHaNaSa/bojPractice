#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b;
    bool f[101];
    for (int i = 0; i <= 100; i++)
        f[i] = false;
    cin >> a >> b;
    for (int i = a + 1; i <= b; i++)
        f[i] = true;
    cin >> a >> b;
    for (int i = a + 1; i <= b; i++)
        f[i] = true;
    int ans = 0;
    for (int i = 0; i <= 100; i++) {
        if (f[i])
            ans++;
    }
    cout << ans;
}