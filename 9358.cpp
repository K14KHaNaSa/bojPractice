#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int tt, n;
    int a[100];
    cin >> tt;
    for (int t = 1; t <= tt;t++) {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        while (n > 2) {
            for (int i = 0; i < n / 2; i++)
                a[i] += a[n - 1 - i];
            if (n % 2 == 1)
                a[n / 2] *= 2;
            (n % 2 == 1) ? n = (n / 2) + 1 : n /= 2;
        }
        cout << "Case #" << t << ": ";
        (a[0] > a[1]) ? cout << "Alice\n" : cout << "Bob\n";
    }
}