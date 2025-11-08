#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int q, j, l, p, t;
    bool jp;
    cin >> q;
    while (q--) {
        cin >> j >> l >> p >> t;
        jp = true;
        if (j > 2)
            jp = false;
        if (t < 50)
            jp = false;
        if (j == 1) {
            if ((l * 3 >= 100 || p * 3 >= 100) && l > 21 && p > 21)
                jp = false;
        }
        if (j == 2) {
            if ((l * 3 >= 90 || p * 3 >= 90) && l > 21 && p > 21)
                jp = false;
        }
        jp ? cout << "YES\n" : cout << "NO\n";
    }
}