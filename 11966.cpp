#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unsigned long long int n, t;
    t = 1;
    cin >> n;
    while (t <= n) {
        if (t == n) {
            cout << 1;
            return 0;
        }
        else
            t *= 2;
    }
    cout << 0;
}