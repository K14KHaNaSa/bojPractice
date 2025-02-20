#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n, sum;
    char c;
    cin >> t;
    c = cin.get();
    while (t--) {
        c = '.';
        sum = 0;
        while (c != '\n') {
            cin >> n;
            sum += n;
            c = cin.get();
        }
        cout << sum << '\n';
    }
}