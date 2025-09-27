#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T, t;
    cin >> T;
    while (T--) {
        cin >> t;
        (t % 25 < 17) ? cout << "ONLINE\n" : cout << "OFFLINE\n";
    }
}