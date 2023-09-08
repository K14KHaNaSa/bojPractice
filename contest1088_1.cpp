#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, u, l;
    cin >> n >> u >> l;
    if (n > 999) {
        if (u > 7999 || l > 259)
            cout << "Very ";
        cout << "Good";
    }
    else
        cout << "Bad";
}