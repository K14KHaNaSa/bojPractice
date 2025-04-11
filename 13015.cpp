#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, i, j;
    cin >> n;
    // first line
    for (i = 0; i < n; i++)
        cout << '*';
    for (i = 0; i < (n * 2) - 3; i++)
        cout << ' ';
    for (i = 0; i < n; i++)
        cout << '*';
    cout << '\n';
    // increase
    for (j = 1; j < n; j++) {
        for (i = 0; i < j; i++)
            cout << ' ';
        cout << '*';
        for (i = 0; i < n - 2; i++)
            cout << ' ';
        cout << '*';
        for (i = 0; i < (n - j) * 2 - 3; i++)
            cout << ' ';
        if (j < n - 1)
            cout << '*';
        for (i = 0; i < n - 2; i++)
            cout << ' ';
        cout << "*\n";
    }
    // decrease
    for (j = n - 2; j > 0; j--) {
        for (i = 0; i < j; i++)
            cout << ' ';
        cout << '*';
        for (i = 0; i < n - 2; i++)
            cout << ' ';
        cout << '*';
        for (i = 0; i < (n - j) * 2 - 3; i++)
            cout << ' ';
        cout << '*';
        for (i = 0; i < n - 2; i++)
            cout << ' ';
        cout << "*\n";
    }
    // last line
    for (i = 0; i < n; i++)
        cout << '*';
    for (i = 0; i < (n * 2) - 3; i++)
        cout << ' ';
    for (i = 0; i < n; i++)
        cout << '*';
}