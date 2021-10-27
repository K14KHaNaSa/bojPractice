#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int a[3], temp;
    cin >> a[0] >> a[1] >> a[2];
    for (int i = 0; i < 2; i++) {
        if (a[i] < a[i + 1]) {
            temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
        }
    }
    if (a[0] < a[1]) {
        temp = a[0];
        a[0] = a[1];
        a[1] = temp;
    }
    if ((a[0] - a[1]) == 0) {
        if ((a[1] - a[2]) == 0) {
            cout << 10000 + a[0] * 1000;
        }
        else {
            cout << 1000 + a[0] * 100;
        }
    }
    else if ((a[1] - a[2]) == 0) {
        cout << 1000 + a[1] * 100;
    }
    else {
        cout << a[0] * 100;
    }
}