#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a[3], temp;
    cin >> a[0] >> a[1] >> a[2];
    while (a[0] != 0) {
        //cin >> a[0] >> a[1] >> a[2];
        for (int i = 0; i < 2; i++) {
            if (a[i] > a[i + 1]) {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
        if (a[0] > a[1]) {
            temp = a[0];
            a[0] = a[1];
            a[1] = temp;
        }

        if ((pow(a[0],2) + pow(a[1],2)) == pow(a[2],2)) {
                cout << "right\n";
        }
        else {
            cout << "wrong\n";
        }
        cin >> a[0] >> a[1] >> a[2];
    }
}