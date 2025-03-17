#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long int n, r, c;
    cin >> n >> r >> c;
    if (n == 3) {
        (r == 2 && c == 2) ? cout << 1 : cout << 4;
    }
    else {
        if ((r + c) % 2 == 0 && (n % 2 == 1))
            cout << 1 + (n * n) / 2;
        else
            cout << (n * n) / 2;
    }
}