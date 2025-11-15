#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    if (n < 100000) {
        cout << n / 20 << ' ' << n / 20 * 19;
    }
    else if (n < 500000) {
        cout << n / 10 << ' ' << n / 10 * 9;
    }
    else if (n < 1000000) {
        cout << n / 20 * 3 << ' ' << n / 20 * 17;
    }
    else {
        cout << n / 5 << ' ' << n / 5 * 4;
    }
}