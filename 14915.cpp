#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long int m, n, d, o;
    bool front_zero = true;
    cin >> m >> n;
    d = 1;
    if (m == 0) {
        cout << 0;
        return 0;
    }
    while (d < m)
        d *= n;
    while (d > 0) {
        o = m / d;
        m %= d;
        if (o > 0)
            front_zero = false;
        if (!front_zero) {
            if (o < 10)
                cout << o;
            else
                cout << char('A' + o - 10);
        }
        d /= n;
    }
}