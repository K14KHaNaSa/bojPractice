#include <iostream>
using namespace std;

bool oe[300000]; // false = odd / true = even;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, x, y;
    int odd = 0;
    int first_odd;
    int even = 0;
    int first_even;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        if ((x + y) % 2 == 0) {
            oe[i] = true;
            even++;
            first_even = i;
        }
        else {
            oe[i] = false;
            odd++;
            first_odd = i;
        }
    }
    if (odd > 0 && even > 0) {
        cout << "YES\n" << first_even + 1 << " ";
        for (int i = 0; i < n; i++) {
            if (i != first_even && i != first_odd)
                cout << i + 1 << " ";
        }
        cout << first_odd + 1;
    }
    else
        cout << "NO";
}