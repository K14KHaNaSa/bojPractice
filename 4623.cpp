#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b, c, d, tmp;
    cin >> a >> b >> c >> d;
    while (a + b + c + d > 0) {
        if (a < b) {
            tmp = a;
            a = b;
            b = tmp;
        }
        if (c < d) {
            tmp = c;
            c = d;
            d = tmp;
        }
        (a * 100 / c > b * 100 / d) ? cout << min(100, c * 100 / a) << "%\n" : cout << min(100, d * 100 / b) << "%\n";
        cin >> a >> b >> c >> d;
    }
}