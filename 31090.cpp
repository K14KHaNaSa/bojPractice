#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n % 100 == 0)
            cout << "Bye\n";
        else if ((n + 1) % (n % 100) == 0 ? cout << "Good\n" : cout << "Bye\n");
    }
}