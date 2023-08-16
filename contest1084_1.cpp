#include <iostream>
using namespace std;
string f[1500];
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "soccer ";
    }
    cout << flush;
    for (int i = 0; i < n; i++) {
        cin >> f[i];
    }
    for (int i = 0; i < n; i++) {
        if (f[i] == "bowling") {
            cout << "swimming ";
        }
        else {
            cout << "bowling ";
        }
    }
    cout << flush;
}