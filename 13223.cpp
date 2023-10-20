#include <iostream>
#include <string>
using namespace std;

int sti(string hms) {
    return stoi(hms.substr(0, 2)) * 3600 + stoi(hms.substr(3, 2)) * 60 + stoi(hms.substr(6, 2));
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string hms;
    cin >> hms;
    int now = sti(hms);
    cin >> hms;
    int salt = sti(hms);
    if (now == salt) {
        cout << "24:00:00";
    }
    else {
        if (now > salt) {
            salt += 86400;
        }
        int ans = salt - now;
        if (ans / 3600 < 10)
            cout << "0";
        cout << ans / 3600 << ":";
        if (ans % 3600 / 60 < 10)
            cout << "0";
        cout << (ans % 3600) / 60 << ":";
        if (ans % 60 < 10)
            cout << "0";
        cout << ans % 60;
    }
}