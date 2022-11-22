#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a;
    int two = 0;
    int zero = 0;
    int one = 0;
    int eight = 0;
    bool gwan = true;
    a = cin.get();
    while (a != 10) {
        if (a == 48) {
            zero++;
        }
        else if (a == 49) {
            one++;
        }
        else if (a == 50) {
            two++;
        }
        else if (a == 56) {
            eight++;
        }
        else {
            gwan = false;
        }
        a = cin.get();
    }
    if (!gwan) {
        cout << 0;
    }
    else {
        if (two == zero && zero == one && one == eight) {
            cout << 8;
        }
        else if (two > 0 && zero > 0 && one > 0 && eight > 0) {
            cout << 2;
        }
        else {
            cout << 1;
        }
    }
}