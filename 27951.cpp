#include <iostream>
using namespace std;

int n, u, d, i, au, ad, ab;
int a[1000000];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    au = 0;
    ad = 0;
    ab = 0;
    for (i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1)
            au++;
        if (a[i] == 2)
            ad++;
        if (a[i] == 3)
            ab++;
    }
    cin >> u >> d;
    u -= au;
    d -= ad;
    if (u < 0 || d < 0) {
        cout << "NO";
        return 0;
    }
    else {
        cout << "YES\n";
        for (i = 0; i < n; i++) {
            if (a[i] == 1)
                cout << 'U';
            else if (a[i] == 2)
                cout << 'D';
            else {
                if (u > 0) {
                    cout << 'U';
                    u--;
                }
                else
                    cout << 'D';
            }
        }
    }
}