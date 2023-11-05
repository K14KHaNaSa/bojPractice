#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int s, d, i, l, n;
    cin >> s >> d >> i >> l >> n;
    n *= 4;
    if (s + d + i + l < n)
        cout << n - (s + d + i + l);
    else
        cout << "0";
}