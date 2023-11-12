#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    string d;
    cin >> n >> d >> k;
    if (d == "annyong") {
        if (k % 2 == 1)
            cout << k;
        else if (k == n)
            cout << k - 1;
        else
            cout << k + 1;
    }
    else {
        if (k % 2 == 1) {
            if (k == n)
                cout << k - 1;
            else
                cout << k + 1;
        }
        else
            cout << k;
    }
}