#include <iostream>
using namespace std;

int result(string ss) {
    if (ss == "0")
        return 0;
    if (ss == "1")
        return 1;
    if (ss == "2")
        return 2;
    if (ss == "3")
        return 3;
    if (ss == "4")
        return 4;
    if (ss == "5")
        return 5;
    if (ss == "6")
        return 6;
    if (ss == "7")
        return 7;
    if (ss == "8")
        return 8;
    if (ss == "9")
        return 9;
    if (ss == "a")
        return 10;
    if (ss == "b")
        return 11;
    if (ss == "c")
        return 12;
    if (ss == "d")
        return 13;
    if (ss == "e")
        return 14;
    if (ss == "f")
        return 15;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string x;
    cin >> x;
    int ans = 0;
    int xx = 1;
    if (x.length() > 2 && x.substr(0, 2) == "0x") {
        // 16
        for (int i = x.length() - 1; i > 1; i--) {
            ans += xx * result(x.substr(i, 1));
            xx *= 16;
        }
        cout << ans;
    }
    else if (x.length() > 1 && x.substr(0, 1) == "0") {
        // 8
        for (int i = x.length() - 1; i > 0; i--) {
            ans += xx * result(x.substr(i, 1));
            xx *= 8;
        }
        cout << ans;
    }
    else {
        // 10
        cout << x;
    }
}