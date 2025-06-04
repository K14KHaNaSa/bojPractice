#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int x, y, i;
    cin >> x >> y;
    for (i = 0; i < max(x, y) - min(x, y); i++)
        cout << 1;
    for (i = min(x, y); i > 0; i--)
        cout << 2;
}