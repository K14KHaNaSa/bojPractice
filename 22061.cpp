#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, a, b, c, rem;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        if (c % 2 == 0)
            rem = max(c - b * 2, 0);
        else
            rem = max(c - b * 2, 1);
        if (rem - a <= 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}