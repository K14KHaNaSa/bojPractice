#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    long double x, y, xs, ys, xx, xy, a2, b2;
    xs = 0; ys = 0; xx = 0; xy = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        xs += x;
        ys += y;
        xx += x * x;
        xy += x * y;
    }
    if (n * xx != xs * xs) {
        a2 = (n * xy - xs * ys) / (n * xx - xs * xs);
        b2 = (ys - a2 * xs) / n;
        cout << fixed << setprecision(10) << a2 << " " << b2;
    }
    else {
        cout << "EZPZ";
    }
}