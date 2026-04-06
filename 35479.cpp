#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    double r, g, b, rr, gg, bb, k;
    cin >> r >> g >> b;
    rr = r / 255;
    gg = g / 255;
    bb = b / 255;
    k = 1 - max(r, (max(g, b))) / 255;
    if (r + g + b == 0)
        cout << "0 0 0 1";
    else
        cout << fixed << setprecision(4) << (1 - rr - k) / (1 - k) << ' ' << (1 - gg - k) / (1 - k) << ' ' << (1 - bb - k) / (1 - k) << ' ' << k;
}