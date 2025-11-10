#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int q, m, t;
    cin >> q;
    while (q--) {
        cin >> m;
        m++;
        t = 6 * 60 - 6;
        while (m > 0) {
            m -= 50;
            t += 12;
        }
        cout << setfill('0') << setw(2) << t / 60 << ':' << setfill('0') << setw(2) << t % 60 << '\n';
    }
}