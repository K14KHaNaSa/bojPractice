#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        if (k < 2) {
            if (n < 4)
                cout << -1;
            else if (n < 5)
                cout << "2 4 1 3";
            else {
                for (int i = 0; i < n; i++) {
                    if (i % 2 == 0)
                        cout << i / 2 + 1 << ' ';
                    else {
                        cout << (n + 1) / 2 + (i + 1) / 2 << ' ';
                    }
                }
            }
        }
        else {
            while (n--)
                cout << n + 1 << ' ';
        }
        cout << '\n';
    }
}