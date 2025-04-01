#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int r, c, i;
    cin >> r >> c;
    while (r--) {
        for (i = 0; i < c; i++)
            cout << '*';
        cout << '\n';
    }
}