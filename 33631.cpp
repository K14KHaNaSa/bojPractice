#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int f, c, e, b, fn, cn, en, bn, q, o, i, ck;
    cin >> f >> c >> e >> b >> fn >> cn >> en >> bn >> q;
    ck = 0;
    while (q--) {
        cin >> o >> i;
        if (o < 2) {
            if (f >= fn * i && c >= cn * i && e >= en * i && b >= bn * i) {
                ck += i;
                f -= fn * i;
                c -= cn * i;
                e -= en * i;
                b -= bn * i;
                cout << ck << '\n';
            }
            else
                cout << "Hello, siumii\n";
        }
        else if (o < 3) {
            f += i;
            cout << f << '\n';
        }
        else if (o < 4) {
            c += i;
            cout << c << '\n';
        }
        else if (o < 5) {
            e += i;
            cout << e << '\n';
        }
        else {
            b += i;
            cout << b << '\n';
        }
    }
}