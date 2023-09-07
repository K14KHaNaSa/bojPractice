#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;
    int avail = 0;
    for (int i = 1; i <= k; i++) {
        avail += i;
    }
    if (n < avail) {
        cout << "-1";
    }
    else {
        if ((n - avail) % k == 0) {
            cout << k - 1;
        }
        else {
            cout << k;
        }
    }
}