#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int x, i;
    cin >> x;
    for (i = x + 1; i < 10000; i++) {
        if ((i / 100 + i % 100) * (i / 100 + i % 100) == i) {
            cout << i;
            return 0;
        }
    }
    cout << -1;
}