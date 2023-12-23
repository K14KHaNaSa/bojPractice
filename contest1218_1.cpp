#include <iostream>
using namespace std;

int a, b, c, d, e, x1, x2;

int func(int x) {
    return ((x * x * x * a) / 3) + (((b - d) * x * x) / 2) + (c - e) * x;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> x1 >> x2 >> a >> b >> c >> d >> e;
    cout << func(x2) - func(x1);
}