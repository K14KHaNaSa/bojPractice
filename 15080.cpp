#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b, c, d, e, f;
    char dm;
    cin >> a >> dm >> b >> dm >> c >> d >> dm >> e >> dm >> f;
    if ((a > d) || (a == d) && (b > e) || (a == d) && (b == e) && (c > f)) {
        d += 24;
    }
    cout << (d - a) * 3600 + (e - b) * 60 + (f - c);
}