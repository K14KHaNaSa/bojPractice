#include <iostream>
using namespace std;

int a[200000];
bool b[200000];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, q, order, i, x;
    cin >> n;
    long long int l = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = true;
        l += a[i];
    }
    cin >> q;
    cout << l << "\n";
    while (q--) {
        cin >> order;
        if (order == 1) {
            cin >> i >> x;
            if (b[i - 1]) {
                l -= a[i - 1];
                l += x;
            }
            a[i - 1] = x;
        }
        else { // order == 2
            cin >> i;
            if (b[i - 1]) {
                l -= a[i - 1];
                b[i - 1] = false;
            }
            else {
                l += a[i - 1];
                b[i - 1] = true;
            }
        }
        cout << l << "\n";
    }
}