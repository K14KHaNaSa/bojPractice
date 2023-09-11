#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> n;
        cout << "Case #" << i << ": ";
        if (n > 4500) {
            cout << "Round 1\n";
        }
        else if (n > 1000) {
            cout << "Round 2\n";
        }
        else if (n > 25) {
            cout << "Round 3\n";
        }
        else {
            cout << "World Finals\n";
        }
    }
}