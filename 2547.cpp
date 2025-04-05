#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unsigned long long int t, n, c, i, remain;
    cin >> t;
    while (t--) {
        remain = 0;
        cin >> n;
        for (i = 0; i < n; i++) {
            cin >> c;
            remain = (remain + c) % n;
        }
        remain > 0 ? cout << "NO\n" : cout << "YES\n";
    }
}