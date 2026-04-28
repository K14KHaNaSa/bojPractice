#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, ri;
    cin >> n;
    for (int i = 0; i < n * 2; i++) {
        // front slash { / }
        for (int j = n * 2 - 1; j - i > 0; j--) {
            cout << ' ';
        }
        cout << '*';
        for (int j = 0; j < i + 2 - 1; j++) {
            cout << ' ';
        }
        // back { < > }
        if (i < n) {
            for (int j = 0; j < n - i - 1; j++) {
                cout << ' ';
            }
            cout << '*';
            for (int j = 0; j < i; j++) {
                cout << ' ';
            }
            cout << ' ';
            for (int j = 0; j < i; j++) {
                cout << ' ';
            }
            cout << '*';
            for (int j = 0; j < n - i - 1; j++) {
                cout << ' ';
            }
        }
        else {
            ri = i - n;
            for (int j = 0; j < ri; j++) {
                cout << ' ';
            }
            cout << '*';
            for (int j = 0; j < n - ri - 1; j++) {
                cout << ' ';
            }
            cout << ' ';
            for (int j = 0; j < n - ri - 1; j++) {
                cout << ' ';
            }
            cout << '*';
            for (int j = 0; j < ri; j++) {
                cout << ' ';
            }
        }
        cout << '\n';
    }
}