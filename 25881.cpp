#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int f, a, n, c;
    cin >> f >> a >> n;
    while (n--) {
        cin >> c;
        cout << c << ' ' << min(1000, c) * f + max(c - 1000, 0) * a << '\n';
    }
}