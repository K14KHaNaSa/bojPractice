#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b, c, i, o;
    int p[101];
    cin >> a >> b >> c;
    for (i = 0; i < 101; i++)
        p[i] = 0;
    for (int j = 0; j < 3; j++) {
        cin >> i >> o;
        for (int k = i; k < o; k++)
            p[k]++;
    }
    int ans = 0;
    for (i = 0; i < 101; i++) {
        if (p[i] > 2)
            ans += c * 3;
        else if (p[i] > 1)
            ans += b * 2;
        else if (p[i] > 0)
            ans += a;
    }
    cout << ans;
}